#include "Organization.h"
#include<iostream>


        Organization::~Organization(){
        delete Organization::leader;
        }
        string Organization::Getname(){
        return Organization::name;
        };
        void Organization::Setname(string val)
        {
        Organization::name=val;
        };
        string Organization::Gettype()
        {
        return Organization::type;
        };
        void Organization::Settype(string val)
        {
        Organization::type=val;
        };
        Person* Organization::Getleader()
        {
        return Organization::leader;//*
        };
        void Organization::Setleader(Person val)
        {
        Organization::leader=&val;//*
        };
        void Organization::printInformation()
        {
            cout<<"Organization name:"<<Organization::name;
            cout<<"Organization type:"<<Organization::type;
            printPhonesAndEmails();
            cout<<"Leader:";
            Organization::leader->printInformation();
        }

