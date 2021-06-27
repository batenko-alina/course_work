#ifndef ORGANIZATION_H
#define ORGANIZATION_H
#include "PhoneBookItem.h"

class Person;

class Organization: public PhoneBookItem
{
    public:
        Organization();
        virtual ~Organization();
        const string& GetName() const;
        void SetName(const string& val);
        const string& GetType() const;
        void SetType(const string& val);
        Person* GetLeader() const ;
        void SetLeader(Person* val);
        void PrintInformation();

    protected:

    private:
        string name;
        string type;
        Person* leader;
};

#endif // ORGANIZATION_H
