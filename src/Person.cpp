#include "Person.h"
#include <iostream>
#include "Organization.h"


        Person::Person()
        {
            cout << "Enter full name: ";
            getline(cin,Person::FIO);
            cout << "Choose gender :\n1.Male\n2.Female\n";
            int genderValue;
            cin >> genderValue;
            if(genderValue==1)Person::gender = male;
            else if(genderValue==2)Person::gender = female;
            else Person::gender = unknown;
            Person::organization = nullptr;
        }
        Person::Person(const string& new_fio,Gender new_gender,Organization* new_organization)
        {
            Person::FIO = new_fio;
            Person::gender = new_gender;
            Person::organization = new_organization;
        }
        const string& Person::GetFIO() const{ return Person::FIO; }
        void Person::SetFIO(const string& val) { Person::FIO = val; }
        Gender Person::GetGender() const { return Person::gender; }
        void Person::SetGender(Gender val) { Person::gender = val; }
        Organization* Person::GetOrganization()
        {
            return Person::organization;//*
        }
        //const Organization* Person::GetOrganization() const
        //{
         //   return Person::organization;//*
        //}
        void Person::SetOrganization(Organization* val)
        {
            Person::organization=val;//*
        }
        void Person::PrintInformation()
        {
            if(FIO != "")
            {
                cout<<"----------"<<"\n";
                string genderString;
                if(Person::gender==male)genderString="Male";
                if(Person::gender==female)genderString="Female";
                if(Person::gender==unknown)genderString = "Unknown";
                cout<<"FIO:"<<Person::FIO<<"\n";
                cout<<"Gender:"<<genderString<<"\n";
                printPhonesAndEmails();
                if(Person::organization!=nullptr)
                {
                    cout<<"Organization:"<<Person::organization->GetName()<<"\n";
                }
                cout<<"----------"<<"\n";

            }
        }

