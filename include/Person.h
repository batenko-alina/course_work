#ifndef PERSON_H
#define PERSON_H

#include "PhoneBookItem.h"
enum Gender
{male,female,unknown};

class Organization;

class Person: public PhoneBookItem
{
    public:
        virtual ~Person(){}
        Person();
        Person(const string& new_fio,Gender new_gender,Organization* new_organization);
        const string& GetFIO()const;
        void SetFIO(const string& val);
        Gender GetGender() const;
        void SetGender(Gender val);
        Organization* GetOrganization();
        void SetOrganization(Organization* val);
        void PrintInformation();



    protected:

    private:
    string FIO;
    Gender gender;
    Organization* organization;

};

#endif // PERSON_H
