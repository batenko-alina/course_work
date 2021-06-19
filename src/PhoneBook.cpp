#include "PhoneBook.h"

class PhoneBook
{
    public:
        PhoneBook();
        virtual ~PhoneBook();

        vector<Person> GetPersonList() { return personList; }
        void SetPersonList(vector<Person> val) { personList = val; }
        vector<Organization> GetOrganizationList(){return organizationList;}
        void SetOrganizationList(vector<Organization> val){
        organizationList=val;
        }
        void addPersonToList(Person val)
        {
            personList.push_back(val);
        cout<<"new item added to the list:"<<val.FIO;
        }
        void addOrganizationToList(Organization val)
        {
            organizationList.push_back(val);
            cout<<"new organization added to the list:"<<val.name;

        }
        Person* getPersonByNumber(string number)
        {
            for(int i=0;i<personList.size();i++)
            {
                vector<Telephone> telephones=personList[i].GetPhoneList();
                for(int j=0;j<telephones.size();j++)
                {
                if(number==telephones[j])
                    return *(&personList[i]);
                }
            }
            cout<<"No person with this number";
        }

        Person* getPersonByEmail(string email)
        {
            for(int i=0;i<personList.size();i++)
            {
                vector<string> emails=personList[i].GetEmailList();
                for(int j=0;j<emails.size();j++)
                {
                if(email==emails[j])
                    return *(&itemList[i]);
                }
            }
            cout<<"No person with this email";
        }
        Person* getPersonByFullName(string fullName)
        {
            for(int i=0;i<personList.size();i++)
            {
                if(fullName==personList[i].FIO)
                    return *(&personList[i]);
            }
            cout<<"No person with this name";
        }
        Person* getPersonByPartName(string fullName)
        {
            for(int i=0;i<personList.size();i++)
            {
                if (s1.find(s2) != std::string::npos)
                    {
                    return *(&personList[i]);
                    }
            }
            cout<<"No person contains this name";
        }
        Organization* getOrganizationByNumber(string number)
        {
            for(int i=0;i<organizationList.size();i++)
            {
                vector<Telephone> telephones=organizationList[i].GetPhoneList();
                for(int j=0;j<telephones.size();j++)
                {
                if(number==telephones[j])
                    return *(&organizationList[i]);
                }
            }
            cout<<"No organization with this number";
        }
        Organization* getOrganizationByEmail(string email)
        {
            for(int i=0;i<organizationList.size();i++)
            {
                vector<string> emails=organizationList[i].GetEmailList();
                for(int j=0;j<emails.size();j++)
                {
                if(email==emails[j])
                    return *(&organizationList[i]);
                }
            }
            cout<<"No organization with this email";
        }





    protected:

    private:
        vector<Person> personList;
        vector<Organization> organizationList;
};
