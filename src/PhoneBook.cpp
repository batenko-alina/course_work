#include "PhoneBook.h"
#include "vector"
#include<Organization.h>
#include <iostream>
#include<Telephone.h>

        PhoneBook::~PhoneBook(){}

        const vector<Person*>& PhoneBook::GetPersonList()const { return PhoneBook::personList; }

        const vector<Organization*>& PhoneBook::GetOrganizationList()const {return PhoneBook::organizationList;}

        int PhoneBook::chooseOrganization()
        {
            if(organizationList.size()==0)
            {
                cout<<"List is empty. Press any key to continue...";
                getchar();
                return -1;
            }
            cout << "Choose organization from the list(enter number):\n";
            for(int i = 0; i < organizationList.size();i++)
            {
                cout << i+1 << "." << organizationList[i]->GetName() << "\n";
            }
            int chosen;
            cin >> chosen;
            if(chosen>0&&chosen-1<organizationList.size())return chosen-1;
            else return -1;
        }
        int PhoneBook::choosePerson()
        {
            if(personList.size()==0)
            {
                cout<<"List is empty. Press any key to continue...";
                getchar();
                return -1;
            }
            cout << "Choose person from the list(enter number):\n";
            for(int i = 0; i < personList.size();i++)
            {
                cout << i+1 << "." << personList[i]->GetFIO() << "\n";
            }
            int chosen;
            cin >> chosen;
            if(chosen>0&&chosen-1<personList.size())return chosen-1;
            else return -1;
        }
        void PhoneBook::AddPersonToList(Person* val)
        {
            system("clear");
            int chosenOrganization = chooseOrganization();
            if(chosenOrganization>0&&chosenOrganization<organizationList.size())
            val->SetOrganization(organizationList[chosenOrganization]);
            PhoneBook::personList.push_back(val);
            cout<<"New person added to the list:"<<val->GetFIO()<<"\n";
        }
        void PhoneBook::AddOrganizationToList(Organization* val)
        {
            system("clear");
            int chosenLeader = choosePerson();
            if(chosenLeader>=0&&chosenLeader<personList.size())
            val->SetLeader(personList[chosenLeader]);
            PhoneBook::organizationList.push_back(val);
            cout<<"New organization added to the list:"<<val->GetName()<<"\n";

        }
        void PhoneBook::DeletePersonByIndex(int index)
        {
            if(index>=0&&index<personList.size())
                {
                    personList.erase(personList.begin()+index);
                    delete personList[index];
                }
        }
        void PhoneBook::DeleteOrganizationByIndex(int index)
        {
            if(index>=0&&index<organizationList.size())
                {
                    organizationList.erase(organizationList.begin()+index);
                    delete organizationList[index];
                }
        }
        Person*PhoneBook::GetPersonByIndex(int index)
        {
            if(index>=0&&index<personList.size())
            return personList[index];
            else return nullptr;
        }
        void PhoneBook::FindPersonsByNumber() const
        {
            system("clear");
            string number;
            cout << "Enter number to search person:\n";
            getline(cin,number);
            cout << "Persons with number " << number <<":\n";
            for(int i=0;i<PhoneBook::personList.size();i++)
            {
                vector<Telephone> telephones=PhoneBook::personList[i]->GetPhoneList();
                for(int j=0;j<telephones.size();j++)
                {
                if(number==telephones[j].GetNumber())
                    PhoneBook::personList[i]->PrintInformation();
                }
            }
            cout<<"For continue please press any key...";
            getchar();
            system("clear");
        }

        void PhoneBook::FindPersonsByEmail() const
        {
            system("clear");
            string email;
            cout << "Enter email to search person:\n";
            cin >> email;
            cout << "Persons with email "<< email << ":\n";
            for(int i=0;i<PhoneBook::personList.size();i++)
            {
                vector<string> emails=PhoneBook::personList[i]->GetEmailList();
                for(int j=0;j<emails.size();j++)
                {
                if(email==emails[j])
                    PhoneBook::personList[i]->PrintInformation();
                }
            }
            cout<<"For continue please press any key...";
            getchar();
            system("clear");
        }
        void PhoneBook::FindPersonsByFullName() const
        {
            system("clear");
            string fullName;
            cout << "Enter full name to search person:\n";
            getline(cin,fullName);
            for(int i=0;i<PhoneBook::personList.size();i++)
            {
                if(fullName==PhoneBook::personList[i]->GetFIO())
                    personList[i]->PrintInformation();
            }
            cout<<"For continue please press any key...";
            getchar();
            system("clear");
        }
        void PhoneBook::FindPersonsByPartName() const
        {
            system("clear");
            string partName;
            cout << "Enter part of name to search person:\n";
            getline(cin,partName);
            for(int i=0;i<PhoneBook::personList.size();i++)
            {
                if (PhoneBook::personList[i]->GetFIO().find(partName) != std::string::npos)
                    {
                        personList[i]->PrintInformation();
                    }
            }
            cout<<"For continue please press any key...";
            getchar();
            system("clear");
        }
        Organization* PhoneBook::GetOrganizationByIndex(int index)
        {
            if(index>=0&&index<organizationList.size())
            return organizationList[index];
            else return nullptr;
        }

        void PhoneBook::FindOrganizationsByName() const
        {
            system("clear");
            string name;
            cout << "Enter name to search organization:\n";
            getline(cin,name);
            for(int i=0;i<PhoneBook::organizationList.size();i++)
            {
                if(name==organizationList[i]->GetName())
                {
                    PhoneBook::organizationList[i]->PrintInformation();
                }
            }
            cout<<"For continue please press any key...";
            getchar();
            system("clear");
        }

        void PhoneBook::FindOrganizationsByNumber() const
        {
            system("clear");
            string number;
            cout << "Enter number to search organization:\n";
            getline(cin,number);
            for(int i=0;i<PhoneBook::organizationList.size();i++)
            {
                vector<Telephone> telephones=PhoneBook::organizationList[i]->GetPhoneList();
                for(int j=0;j<telephones.size();j++)
                {
                if(number==telephones[j].GetNumber())
                    PhoneBook::organizationList[i]->PrintInformation();
                }
            }
            cout<<"For continue please press any key...";
            getchar();
            system("clear");
        }
        void PhoneBook::FindOrganizationsByEmail() const
        {
            system("clear");
            string email;
            cout << "Enter email to search organization:\n";
            getline(cin,email);
            for(int i=0;i<PhoneBook::organizationList.size();i++)
            {
                vector<string> emails=PhoneBook::organizationList[i]->GetEmailList();
                for(int j=0;j<emails.size();j++)
                {
                if(email==emails[j])
                    PhoneBook::organizationList[i]->PrintInformation();
                }
            }
            cout<<"For continue please press any key...";
            getchar();
            system("clear");
        }
        void PhoneBook::PrintPersons()
        {
            system("clear");
            cout<<"Persons:\n";
            for(int i=0;i<PhoneBook::personList.size();i++)
                {
                    PhoneBook::personList[i]->PrintInformation();
                }
            cout<<"For continue please press any key...";
            getchar();
            system("clear");
        }
        void PhoneBook::PrintOrganizations()
        {
            system("clear");
            cout<<"Organizations:\n";
            for(int i=0;i<PhoneBook::organizationList.size();i++)
            {
                PhoneBook::organizationList[i]->PrintInformation();
            }
            cout<<"For continue please press any key...";
            getchar();
            system("clear");
        }
        void PhoneBook::PrintAllInformation()
        {
            PrintPersons();
            PrintOrganizations();
        }
