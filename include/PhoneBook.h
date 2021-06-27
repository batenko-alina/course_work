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
        //void SetPersonList(vector<Person*> val);

        void AddPersonToList(Person* val);
        const vector<Organization*>& GetOrganizationList() const;
        int chooseOrganization();
        int choosePerson();
        //void SetOrganizationList(vector<Organization*> val);
        Person* GetPersonByIndex(int index);
        Person* GetPersonByNumber(string number);
        Person* GetPersonByEmail(string email);
        Organization* GetOrganizationByIndex(int index);
        Organization* GetOrganizationByNumber(string number);
        Organization* GetOrganizationByEmail(string email);
        Person* GetPersonByFullName(string fullName);
        vector<Person*> GetPersonByPartName(string fullName) const;
        void AddOrganizationToList(Organization* val);
        void PrintPersons();
        void PrintOrganizations();
        void PrintAllInformation();



    protected:

    private:

        vector<Person*> personList;
        vector<Organization*> organizationList;

};

#endif // PHONEBOOK_H
