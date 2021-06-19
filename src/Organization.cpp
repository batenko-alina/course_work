#include "Organization.h"

class Organization
{
    public:
        Organization();
        virtual ~Organization();

        string Getname(){
        return name;
        };
        void Setname(string val)
        {
        name=val;
        };
        string Gettype()
        {
        return type;
        };
        void Settype(string val)
        {
        type=val;
        };
        Person* Getleader()
        {
        return leader;
        };
        void Setleader(Person* val)
        {
        leader=val;
        };

    protected:

    private:
        string name;
        string type;
        Person* leader;
};
