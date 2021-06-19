#include "Telephone.h"

class Telephone
{
    public:
        Telephone();
        virtual ~Telephone();

        enum Getcategory() { return category; }
        void Setcategory(enum val) { category = val; }
        enum Getform() { return form; }
        void Setform(enum val) { form = val; }
        string GetNumber()
        {
            return number;
        }
        void SetNumber(string val)
        {
            number=val;
        }

    protected:

    private:
        PhoneCategory category;
        PhoneForm form;
        string number;
};
