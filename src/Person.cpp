#include "Person.h"
#include <iostream>
#include "Organization.h"


        //Person::Person()
        //{}
        //Person::Person(string new_fio,Gender new_gender,Organization new_organization)
        //{
        //Person::FIO=new_fio;
        //Person::gender = new_gender;
        //Person::organization=&new_organization;
        //}
        Person::~Person(){
        delete Person::organization;
        }
        string Person::GetFIO() { return Person::FIO; }
        void Person::SetFIO(string val) { Person::FIO = val; }
        Gender Person::Getgender() { return Person::gender; }
        void Person::Setgender(Gender val) { Person::gender = val; }
        Organization* Person::GetOrganization()
        {
        return Person::organization;//*
        }
        void Person::SetOrganization(Organization val)
        {
        Person::organization=&val;//*
        }
        void Person::printInformation()
        {
            if(FIO!="")
            {
            cout<<"----------"<<"\n";
            string genderString;
            if(Person::gender==0)genderString="Male";
            if(Person::gender==1)genderString="Female";
            cout<<"FIO:"<<Person::FIO<<"\n";
            cout<<"Gender:"<<genderString<<"\n";
            Person::printPhonesAndEmails();
            //cout<<"Organization information:\n"<<Person::organization->Getname();
            }
        }

