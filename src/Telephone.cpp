#include "Telephone.h"
#include <string>
#include <iostream>

        Telephone::Telephone()
        {
            cout << "Enter number:\n";
            cin >> number;
            cout << "Choose category :\n1.Home\n2.Mobile\n3.Work\n";
            int categoryValue;
            cin >> categoryValue;
            if(categoryValue==1)category = home;
            else if(categoryValue==2)category = mobile;
            else if(categoryValue==3)category = work;
            cout << "Choose form :\n1.Full\n2.Middle\n3.Short\n";
            int formValue;
            cin >> formValue;
            if(formValue==1)form = fullForm;
            else if(formValue==2) form = middleForm;
            else if(formValue==3) form = shortForm;
        }
        Telephone::Telephone(PhoneCategory phoneCategory,PhoneForm phoneForm,string num)
        {
        Telephone::category = phoneCategory;
        Telephone::form = phoneForm;
        Telephone::number = num;
        }
        Telephone::~Telephone(){}
        PhoneCategory Telephone::GetCategory() { return Telephone::category; }
        void Telephone::SetCategory(PhoneCategory val) { Telephone::category = val; }
        PhoneForm Telephone::GetForm() { return Telephone::form; }
        void Telephone::SetForm(PhoneForm val) { Telephone::form = val; }
        string Telephone::GetNumber()
        {
            return Telephone::number;
        }
        void Telephone::SetNumber(string val)
        {
            Telephone::number=val;
        }
