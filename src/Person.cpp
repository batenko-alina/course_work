#include "Person.h"

#include "Organization.h"
#include <iostream>

        Person::~Person(){
        delete Person::organization;
        }
        string Person::GetFIO() { return Person::FIO; }
        void Person::SetFIO(string val) { Person::FIO = val; }
        Sex Person::Getsex() { return Person::sex; }
        void Person::Setsex(Sex val) { Person::sex = val; }
        Organization* Person::GetOrganization()
        {
        return Person::organization;//*
        }
        void Person::SetOrganization(Organization* val)
        {
        Person::organization=val;//*
        }
        void Person::printInformation()
        {
            cout<<"FIO:"<<Person::FIO<<"\n";
            cout<<"Sex:"<<Person::sex<<"\n";
            Person::printPhonesAndEmails();
            cout<<"Organization information:\n";
            Person::organization->printInformation();
        }

