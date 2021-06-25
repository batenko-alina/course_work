#ifndef PERSON_H
#define PERSON_H

#include "PhoneBookItem.h"
enum Gender
{male,female};

class Organization;

class Person: public PhoneBookItem
{
    public:
        virtual ~Person();
        string GetFIO();
        void SetFIO(string val);
        Gender Getgender();
        void Setgender(Gender val);
        Organization* GetOrganization();
        void SetOrganization(Organization *val);
        void printInformation();



    protected:

    private:
    string FIO;
    Gender gender;
    Organization* organization;

};

#endif // PERSON_H
