#ifndef PERSON_H
#define PERSON_H

#include "PhoneBookItem.h"
enum Sex
{male,female};

class Organization;

class Person: public PhoneBookItem
{
    public:
        virtual ~Person();

        string GetFIO();
        void SetFIO(string val);
        Sex Getsex();
        void Setsex(Sex val);
        Organization* GetOrganization();
        void SetOrganization(Organization* val);
        void printInformation();



    protected:

    private:
    string FIO;
    Sex sex;
    Organization* organization;

};

#endif // PERSON_H
