#ifndef ORGANIZATION_H
#define ORGANIZATION_H
#include "PhoneBookItem.h"

class Person;

class Organization: public PhoneBookItem
{
    public:
        //Organization();
        virtual ~Organization();
        string Getname();
        void Setname(string val);
        string Gettype();
        void Settype(string val);
        Person* Getleader();
        void Setleader(Person val);
        void printInformation();

    protected:

    private:
        string name;
        string type;
        Person* leader;
};

#endif // ORGANIZATION_H
