#include "PhoneBookItem.h"
#include <iostream>

        PhoneBookItem::~PhoneBookItem(){}
        const vector<Telephone>& PhoneBookItem::GetPhoneList() const
        {
            return PhoneBookItem::PhoneList;
        }

        void PhoneBookItem::SetPhoneList(const vector<Telephone>& val)
        {
            PhoneBookItem::PhoneList = val;
        }

        void PhoneBookItem::AddPhone(const Telephone& val)
        {
            PhoneList.push_back(val);
        }

        const vector<string>& PhoneBookItem::GetEmailList() const
        {
            return PhoneBookItem::EmailList;
        }

        void PhoneBookItem::SetEmailList(vector<string> val)
        {
            PhoneBookItem::EmailList = val;
        }

        void PhoneBookItem::AddEmail(const string& val)
        {
            EmailList.push_back(val);
        }
        void PhoneBookItem::AddEmail()
        {
            cout << "Enter email:\n";
            string val;
            cin>>val;
            EmailList.push_back(val);
        }
        void PhoneBookItem::printPhonesAndEmails()
        {
            cout<<"Phones:\n";
            for(int i=0;i<PhoneBookItem::PhoneList.size();i++)
            {
                cout<<"    Phone "<<i+1<<": "<<PhoneBookItem::PhoneList[i].GetNumber()<<"\n";
                int categoryValue=PhoneBookItem::PhoneList[i].GetCategory();
                string categoryString;
                if(categoryValue==1)categoryString = "Home";
                else if(categoryValue==2)categoryString = "Mobile";
                else if(categoryValue==3)categoryString = "Work";
                int formValue=PhoneBookItem::PhoneList[i].GetForm();
                string formString;
                if(formValue==1)formString = "Full form";
                else if(formValue==2) formString = "Middle form";
                else if(formValue==3) formString = "Short form";
                cout<<"        Category:"<<categoryString<<"\n";

                cout<<"        Form:"<<formString<<"\n";
            }
            cout<<"Emails:\n";
            for(int i=0;i<PhoneBookItem::EmailList.size();i++)
            {
                cout<<"    Email "<<i+1<<": "<<PhoneBookItem::EmailList[i]<<"\n";
            }

        }
