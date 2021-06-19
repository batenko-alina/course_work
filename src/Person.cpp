#include "Person.h"

#include "Organization.h" 
//мы удалили эту строку из Person.h и я, на всякий случай, её указал в этом файле

//не нужно дублировать содержимое h файла в cpp файле
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
