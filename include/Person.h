#ifndef PERSON_H
#define PERSON_H

#include <Organization.h>
#include <PhoneBookItem.h>
class Person:PhoneBookItem
{
    public:
        Person();
        virtual ~Person();

        string GetFIO();
        void SetFIO(string val);
        enum Getsex();
        void Setsex(enum val);



    protected:

    private:
    string FIO;
    enum sex;
    Organization* organization;

};

#endif // PERSON_H
