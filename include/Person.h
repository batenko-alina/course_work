#ifndef PERSON_H
#define PERSON_H

//#include "Organization.h" - циклическая ссылка в h файлах невозможна
#include "PhoneBookItem.h"

class Organization; //прототип класса - решает проблему циклической ссылки

class Person:PhoneBookItem
{
    public:
        Person();
        virtual ~Person(); //вообще-то виртуальный деструктор нужно и достаточно сделать в базовом классе

        string GetFIO();
        void SetFIO(string val);
        enum Getsex();
        void Setsex(enum val);



    protected:

    private:
    string FIO;
    enum sex; //неверно - вначале объявите тип enum (например, enum Sex {male, female};), а здесь объявите поле данного типа
    Organization* organization;

};

#endif // PERSON_H
