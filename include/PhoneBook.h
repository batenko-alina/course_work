#ifndef PHONEBOOK_H
#define PHONEBOOK_H

using namespace std;
#include <vector>
#include <Person.h>

class PhoneBook
{
    public:
        virtual ~PhoneBook();

        vector<Person> GetPersonList();
        void SetPersonList(vector<Person> val);
        void addPersonToList(Person val);
        vector<Organization> GetOrganizationList();
        void SetOrganizationList(vector<Organization> val);
        Person getPersonByNumber(string number);
        Person getPersonByEmail(string email);
        Organization getOrganizationByNumber(string number);
        Organization getOrganizationByEmail(string email);
        Person getPersonByFullName(string fullName);
        vector<Person> getPersonByPartName(string fullName);
        void addOrganizationToList(Organization val);
        void printAllInformation();



    protected:

    private:
        vector<Person> personList;
        vector<Organization> organizationList;

};

#endif // PHONEBOOK_H
