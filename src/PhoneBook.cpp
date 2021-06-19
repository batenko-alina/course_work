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
        cout<<"new item added to the list:"<<val.GetFIO();
        }
        void addOrganizationToList(Organization val)
        {
            organizationList.push_back(val);
            cout<<"new organization added to the list:"<<val.Getname();

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
                if(fullName==personList[i].GetFIO())
                    return *(&personList[i]);
            }
            cout<<"No person with this name";
        }
        vector<Person*> getPersonByPartName(string partName)
        {
        vector<Person*> people;
            for(int i=0;i<personList.size();i++)
            {
                if (personList[i].GetFIO().find(partName) != std::string::npos)
                    {
                    people.push_back(*(&personList[i]));
                    }
            }
            if(people.size==0)
            cout<<"No person contains this name";
            else return people;
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
