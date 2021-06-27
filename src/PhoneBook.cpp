#include "PhoneBook.h"
#include<Organization.h>
#include <iostream>
#include<Telephone.h>

        PhoneBook::~PhoneBook(){}

        const vector<Person*>& PhoneBook::GetPersonList()const { return PhoneBook::personList; }

        //void PhoneBook::SetPersonList(vector<Person> val) { PhoneBook::personList = val; }

        const vector<Organization*>& PhoneBook::GetOrganizationList()const {return PhoneBook::organizationList;}

        //void PhoneBook::SetOrganizationList(vector<Organization> val){
        //PhoneBook::organizationList=val;
        //}
        int PhoneBook::chooseOrganization()
        {
            cout << "Choose organization from the list(enter number):\n";
            for(int i = 0; i < organizationList.size();i++)
            {
                cout << i+1 << "." << organizationList[i]->GetName() << "\n";
            }
            int chosen;
            cin >> chosen;
            return chosen-1;
        }
        int PhoneBook::choosePerson()
        {
            cout << "Choose person from the list(enter number):\n";
            for(int i = 0; i < personList.size();i++)
            {
                cout << i+1 << "." << personList[i]->GetFIO() << "\n";
            }
            int chosen;
            cin >> chosen;
            return chosen-1;
        }
        void PhoneBook::AddPersonToList(Person* val)
        {
            int chosenOrganization = chooseOrganization();
            if(chosenOrganization>0&&chosenOrganization<organizationList.size())
            val->SetOrganization(organizationList[chosenOrganization]);
            PhoneBook::personList.push_back(val);
            cout<<"new item added to the list:"<<val->GetFIO()<<"\n";
        }
        void PhoneBook::AddOrganizationToList(Organization* val)
        {
            int chosenLeader = choosePerson();
            if(chosenLeader>=0&&chosenLeader<personList.size())
            val->SetLeader(personList[chosenLeader]);
            PhoneBook::organizationList.push_back(val);
            cout<<"new organization added to the list:"<<val->GetName()<<"\n";

        }
        Person* PhoneBook::GetPersonByIndex(int index)
        {
            if(index>=0&&index<personList.size())
            return personList[index];
            else return nullptr;
        }
        Person* PhoneBook::GetPersonByNumber(string number)
        {
            for(int i=0;i<PhoneBook::personList.size();i++)
            {
                vector<Telephone> telephones=PhoneBook::personList[i]->GetPhoneList();
                for(int j=0;j<telephones.size();j++)
                {
                if(number==telephones[j].GetNumber())
                    return PhoneBook::personList[i];
                }
            }
            cout<<"No person with this number"<<"\n";
            return nullptr;
        }

        Person* PhoneBook::GetPersonByEmail(string email)
        {
            for(int i=0;i<PhoneBook::personList.size();i++)
            {
                vector<string> emails=PhoneBook::personList[i]->GetEmailList();
                for(int j=0;j<emails.size();j++)
                {
                if(email==emails[j])
                    return PhoneBook::personList[i];
                }
            }
            cout<<"No person with this email"<<"\n";
            return nullptr;

        }
        Person* PhoneBook::GetPersonByFullName(string fullName)
        {
            for(int i=0;i<PhoneBook::personList.size();i++)
            {
                if(fullName==PhoneBook::personList[i]->GetFIO())
                    return personList[i];
            }
            return nullptr;

        }
        vector<Person*> PhoneBook::GetPersonByPartName(string partName) const//segmentation fault
        {
            vector<Person*> people;
            for(int i=0;i<PhoneBook::personList.size();i++)
            {
                if (PhoneBook::personList[i]->GetFIO().find(partName) != std::string::npos)
                    {
                        people.push_back(PhoneBook::personList[i]);
                    }
            }
            return people;
        }
        Organization* PhoneBook::GetOrganizationByIndex(int index)
        {
            if(index>=0&&index<organizationList.size())
            return organizationList[index];
            else return nullptr;
        }
        Organization* PhoneBook::GetOrganizationByNumber(string number)
        {
            for(int i=0;i<PhoneBook::organizationList.size();i++)
            {
                vector<Telephone> telephones=PhoneBook::organizationList[i]->GetPhoneList();
                for(int j=0;j<telephones.size();j++)
                {
                if(number==telephones[j].GetNumber())
                    return PhoneBook::organizationList[i];
                }
            }
            cout<<"No organization with this number"<<"\n";
            return nullptr;
        }
        Organization* PhoneBook::GetOrganizationByEmail(string email)
        {
            for(int i=0;i<PhoneBook::organizationList.size();i++)
            {
                vector<string> emails=PhoneBook::organizationList[i]->GetEmailList();
                for(int j=0;j<emails.size();j++)
                {
                if(email==emails[j])
                    return PhoneBook::organizationList[i];
                }
            }
            cout<<"No organization with this email"<<"\n";
            return nullptr;
        }
        void PhoneBook::PrintPersons()
        {
            for(int i=0;i<PhoneBook::personList.size();i++)
                {
                    PhoneBook::personList[i]->PrintInformation();
                }
        }
        void PhoneBook::PrintOrganizations()
        {
            for(int i=0;i<PhoneBook::organizationList.size();i++)
            {
                PhoneBook::organizationList[i]->PrintInformation();
            }
        }
        void PhoneBook::PrintAllInformation()
        {
            PrintPersons();
            PrintOrganizations();
        }
