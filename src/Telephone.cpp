#include "Telephone.h"
#include <string>

        Telephone::Telephone(){}
        Telephone::Telephone(PhoneCategory phoneCategory,PhoneForm phoneForm,string num)
        {
        Telephone::category = phoneCategory;
        Telephone::form = phoneForm;
        Telephone::number = num;
        }
        Telephone::~Telephone(){}
        PhoneCategory Telephone::Getcategory() { return Telephone::category; }
        void Telephone::Setcategory(PhoneCategory val) { Telephone::category = val; }
        PhoneForm Telephone::Getform() { return Telephone::form; }
        void Telephone::Setform(PhoneForm val) { Telephone::form = val; }
        string Telephone::GetNumber()
        {
            return Telephone::number;
        }
        void Telephone::SetNumber(string val)
        {
            Telephone::number=val;
        }
