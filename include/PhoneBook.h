#ifndef PHONEBOOK_H
#define PHONEBOOK_H


class PhoneBook
{
    public:
        PhoneBook();
        virtual ~PhoneBook();

        vector<Person> GetpersonList();
        void SetpersonList(vector<Person> val);
        void addPersonToList(Person val);
        vector<Organization> GetOrganizationList();
        void SetOrganizationList(vector<Organization> val);
        Person* getPersonByNumber(string number);
        Person* getPersonByEmail(string email);
        Organization* getOrganizationByNumber(string number);
        Organization* getOrganizationByEmail(string email);
        Person* getPersonByFullName(string fullName);
        Person* getPersonByPartName(string fullName);
        void addOrganizationToList(Organization val);



    protected:

    private:
        vector<Person> personList;
        vector<Organization> organizationList;

};

#endif // PHONEBOOK_H
