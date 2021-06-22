#include "PhoneBookItem.h"
#include <iostream>

        PhoneBookItem::~PhoneBookItem(){}
        vector<Telephone> PhoneBookItem::GetPhoneList() { return PhoneBookItem::PhoneList; }

        void PhoneBookItem::SetPhoneList(vector<Telephone> val) { PhoneBookItem::PhoneList = val; }

        vector<string> PhoneBookItem::GetEmailList() { return PhoneBookItem::EmailList; }

        void PhoneBookItem::SetEmailList(vector<string> val) { PhoneBookItem::EmailList = val; }

        void PhoneBookItem::printPhonesAndEmails()
        {
            cout<<"Phones:\n";
            for(int i=0;i<PhoneBookItem::PhoneList.size();i++)
            {
            cout<<"    Phone ¹"<<i+1<<":"<<PhoneBookItem::PhoneList[i].GetNumber()<<"\n";
            }
            cout<<"Emails:\n";
            for(int i=0;i<PhoneBookItem::EmailList.size();i++)
            {
            cout<<"    Email ¹"<<i+1<<":"<<PhoneBookItem::EmailList[i]<<"\n";
            }

        }
