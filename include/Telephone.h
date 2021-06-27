#ifndef TELEPHONE_H
#define TELEPHONE_H
using namespace std;
#include <string>
enum PhoneCategory
{
home,mobile,work
};
enum PhoneForm
{
fullForm,middleForm,shortForm
};
class Telephone
{
    public:
    Telephone();
    Telephone(PhoneCategory phoneCategory,PhoneForm phoneForm,string num);
        virtual ~Telephone();
        PhoneCategory GetCategory() ;
        void SetCategory(PhoneCategory val);
        PhoneForm GetForm() ;
        void SetForm(PhoneForm val);
        string GetNumber();
        void SetNumber(string val);

    protected:

    private:
        PhoneCategory category;
        PhoneForm form;
        string number;
};

#endif // TELEPHONE_H
