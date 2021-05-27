#include "Person.h"

class Person:PhoneBookItem
{
    public:
        Person();
        virtual ~Person();

        string GetFIO() { return FIO; }
        void SetFIO(string val) { FIO = val; }
        enum Getsex() { return sex; }
        void Setsex(enum val) { sex = val; }



    protected:

    private:
    string FIO;
    enum sex;
    Organization* organization;

};
