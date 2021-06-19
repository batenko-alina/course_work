#ifndef PERSON_H
#define PERSON_H

//#include "Organization.h" - циклическая ссылка в h файлах невозможна
#include "PhoneBookItem.h"

class Organization;
class Person:PhoneBookItem
{
    public:
        Person();
        ~Person();

        string GetFIO();
        void SetFIO(string val);
        enum Getsex();
        void Setsex(enum val);



    protected:

    private:
    string FIO;
    Sex sex;
    Organization* organization;

};

#endif // PERSON_H
