#include "Organization.h"
#include<iostream>
#include "Person.h"


        Organization::Organization()
        {
            cout << "Enter organization name: ";
            getline(cin,Organization::name);
            cout << "Enter type of organization :\n";
            getline(cin,Organization::type);
            Organization::leader = nullptr;
        }
        Organization::~Organization(){
        }
        const string& Organization::GetName() const{
        return Organization::name;
        };
        void Organization::SetName(const string& val)
        {
        Organization::name=val;
        };
        const string& Organization::GetType() const
        {
        return Organization::type;
        };
        void Organization::SetType(const string& val)
        {
        Organization::type=val;
        };
        Person* Organization::GetLeader() const
        {
        return Organization::leader;//*
        };
        void Organization::SetLeader(Person* val)
        {
        Organization::leader=val;//*
        };
        void Organization::PrintInformation()
        {
            cout<<"----------"<<"\n";
            cout<<"Organization name:"<<Organization::name<<"\n";
            cout<<"Organization type:"<<Organization::type<<"\n";
            printPhonesAndEmails();
            cout<<"Leader:"<<Organization::leader->GetFIO()<<"\n";
            cout<<"----------"<<"\n";

        }

