#include "PhoneBook.h"
#include<Organization.h>
#include <iostream>
#include<Telephone.h>

        PhoneBook::~PhoneBook(){}

        vector<Person> PhoneBook::GetPersonList() { return PhoneBook::personList; }

        void PhoneBook::SetPersonList(vector<Person> val) { PhoneBook::personList = val; }

        vector<Organization> PhoneBook::GetOrganizationList(){return PhoneBook::organizationList;}

        void PhoneBook::SetOrganizationList(vector<Organization> val){
        PhoneBook::organizationList=val;
        }
        void PhoneBook::addPersonToList(Person val)
        {
            PhoneBook::personList.push_back(val);
        cout<<"new item added to the list:"<<val.GetFIO()<<"\n";
        }
        void PhoneBook::addOrganizationToList(Organization val)
        {
            PhoneBook::organizationList.push_back(val);
            cout<<"new organization added to the list:"<<val.Getname()<<"\n";

        }
        Person PhoneBook::getPersonByNumber(string number)
        {
            for(int i=0;i<PhoneBook::personList.size();i++)
            {
                vector<Telephone> telephones=PhoneBook::personList[i].GetPhoneList();
                for(int j=0;j<telephones.size();j++)
                {
                if(number==telephones[j].GetNumber())
                    return PhoneBook::personList[i];
                }
            }
            cout<<"No person with this number"<<"\n";
            return Person();
        }

        Person PhoneBook::getPersonByEmail(string email)
        {
            for(int i=0;i<PhoneBook::personList.size();i++)
            {
                vector<string> emails=PhoneBook::personList[i].GetEmailList();
                for(int j=0;j<emails.size();j++)
                {
                if(email==emails[j])
                    return PhoneBook::personList[i];
                }
            }
            cout<<"No person with this email"<<"\n";
            return Person();

        }
        Person PhoneBook::getPersonByFullName(string fullName)
        {
            for(int i=0;i<PhoneBook::personList.size();i++)
            {
                if(fullName==PhoneBook::personList[i].GetFIO())
                    return personList[i];
            }
            cout<<"No person with this name"<<"\n";
            return Person();

        }
        vector<Person> PhoneBook::getPersonByPartName(string partName)
        {
        vector<Person> people;
            for(int i=0;i<PhoneBook::personList.size();i++)
            {
                if (PhoneBook::personList[i].GetFIO().find(partName) != std::string::npos)
                    {
                    people.push_back(PhoneBook::personList[i]);
                    }
            }
            if(people.size()==0)
            cout<<"No person contains this name"<<"\n";
            else return people;
        }
        Organization PhoneBook::getOrganizationByNumber(string number)
        {
            for(int i=0;i<PhoneBook::organizationList.size();i++)
            {
                vector<Telephone> telephones=PhoneBook::organizationList[i].GetPhoneList();
                for(int j=0;j<telephones.size();j++)
                {
                if(number==telephones[j].GetNumber())
                    return PhoneBook::organizationList[i];
                }
            }
            cout<<"No organization with this number"<<"\n";
            return Organization();
        }
        Organization PhoneBook::getOrganizationByEmail(string email)
        {
            for(int i=0;i<PhoneBook::organizationList.size();i++)
            {
                vector<string> emails=PhoneBook::organizationList[i].GetEmailList();
                for(int j=0;j<emails.size();j++)
                {
                if(email==emails[j])
                    return PhoneBook::organizationList[i];
                }
            }
            cout<<"No organization with this email"<<"\n";
            return Organization();
        }
        void PhoneBook::printAllInformation()
        {
            for(int i=0;i<PhoneBook::personList.size();i++)
            {
                PhoneBook::personList[i].printInformation();
            }
            for(int i=0;i<PhoneBook::organizationList.size();i++)
            {
                PhoneBook::organizationList[i].printInformation();
            }
        }
