#include <iostream>
#include <Person.h>
#include <Organization.h>
#include <PhoneBook.h>
#include <Telephone.h>
#include<iostream>
using namespace std;

int main()
{
    PhoneBook phoneBook = PhoneBook();

    Organization organization1= Organization();
    organization1.Setname("First!");
    organization1.Settype("Commercial");


    Person person1 = Person();
    person1.SetFIO("Ivanov ivan Petrovich");
    person1.Setgender(female);

    vector<Telephone> person1PhoneList;
    Telephone person1Phone = Telephone();
    person1Phone.SetNumber("+380991234567");
    person1Phone.Setform(fullForm);
    person1Phone.Setcategory(mobile);
    person1PhoneList.push_back(person1Phone);
    person1.SetPhoneList(person1PhoneList);

    vector<string> person1Email;
    person1Email.push_back("11@g.com");
    person1.SetEmailList(person1Email);


    //organization1.SetEmailList();

    //organization1.Setleader(&person1);
    //person1.SetOrganization(&organization1);
    phoneBook.addOrganizationToList(organization1);
    phoneBook.addPersonToList(person1);
    Person personGetBynumber = phoneBook.getPersonByNumber("+380991234561");
    personGetBynumber.printInformation();
    vector<Person> personGetByPartName = phoneBook.getPersonByPartName("Ivan");
    for(int i=0;i<personGetByPartName.size();i++)
    personGetByPartName[i].printInformation();
    //Organization organizationByEmail = phoneBook.getOrganizationByEmail("")

    phoneBook.printAllInformation();
    return 0;
}
