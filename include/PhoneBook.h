#ifndef PHONEBOOK_H
#define PHONEBOOK_H

using namespace std;
#include <vector>
#include <Person.h>

class PhoneBook
{
    public:
        virtual ~PhoneBook();

        const vector<Person*>& GetPersonList() const;
        void AddPersonToList(Person* val);
        void AddOrganizationToList(Organization* val);
        const vector<Organization*>& GetOrganizationList() const;
        void DeletePersonByIndex(int index);
        void DeleteOrganizationByIndex(int index);
        int chooseOrganization();
        int choosePerson();
        Person* GetPersonByIndex(int index);
        void FindPersonsByNumber() const;
        void FindPersonsByEmail() const;
        Organization* GetOrganizationByIndex(int index);
        void FindOrganizationsByName() const;
        void FindOrganizationsByNumber() const;
        void FindOrganizationsByEmail() const;
        void FindPersonsByFullName() const;
        void FindPersonsByPartName() const;
        void PrintPersons();
        void PrintOrganizations();
        void PrintAllInformation();



    protected:

    private:

        vector<Person*> personList;
        vector<Organization*> organizationList;

};

#endif // PHONEBOOK_H
