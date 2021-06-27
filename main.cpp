#include <iostream>
#include <Person.h>
#include <Organization.h>
#include <PhoneBook.h>
#include <Telephone.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int get_variant(int count) {
    int variant;
    string s; // строка для считывания введённых данных
    getline(cin, s); // считываем строку

    // пока ввод некорректен, сообщаем об этом и просим повторить его
    while (sscanf(s.c_str(), "%d", &variant) != 1 || variant < 1 || variant > count) {
        cout << "Incorrect input. Try again: "; // выводим сообщение об ошибке
        getline(cin, s); // считываем строку повторно
    }

    return variant;
}
void print_menu() {
    //system("clear"); // очищаем экран
 cout << "1.Print all\n";
 cout << "2.Print persons\n";
 cout << "3.print organizations\n";
 cout << "4.add persons\n";
 cout << "5.add organization\n";
 cout << "6.Add number for person\n";
 cout << "7.Add number for organization\n";
 cout << "8.Add email for person\n";
 cout << "9.Add email for organization\n";
 cout << "10.delete person\n";
 cout << "11.delete organization\n";
 cout << "12.find person by number\n";
 cout << "13.find person by full name\n";
 cout << "14.find person by part name\n";
 cout << "15.find organization by name\n";
 cout << "16.find organization by phone\n";
 cout << "17.find organization by email\n";

 cout << "18. EXIT" << "\n";
}


int main()
{

    int variant = 0;
    PhoneBook phoneBook = PhoneBook();
    //phoneBook.AddPersonToList(new Person("Ivanov ivan Petrovich",male,nullptr));
    do
    {
        print_menu();
        variant = get_variant(14);
        switch(variant)
        {
        case 1: phoneBook.PrintAllInformation();
                break;
        case 2: phoneBook.PrintPersons();
                break;
        case 3: phoneBook.PrintOrganizations();
                break;
        case 4: phoneBook.AddPersonToList(new Person());
                break;
        case 5: phoneBook.AddOrganizationToList(new Organization());
                break;
        case 6: phoneBook.GetPersonByIndex(phoneBook.choosePerson())->AddPhone(Telephone());
                break;
        case 7: phoneBook.GetOrganizationByIndex(phoneBook.chooseOrganization())->AddPhone(Telephone());
                break;
        case 8: phoneBook.GetPersonByIndex(phoneBook.choosePerson())->AddEmail();
                break;
        case 9: phoneBook.GetOrganizationByIndex(phoneBook.chooseOrganization())->AddEmail();
                break;
        case 10:
                break;
        case 11:
                break;
        case 12:
                break;
        case 13:
                break;
        case 14:
                break;
        case 15:
                break;
        case 16:
                break;
        case 17:
                break;
        }
        if ( variant!=18)
        system("pause");

    } while (variant!=18);

    //Organization* organization1=new Organization();
    //organization1->SetName("First!");
    //organization1->SetType("Commercial");

    //organization1->AddPhone(Telephone(work, shortForm, "25700"));
    //vector<string> organization1Emails;
    //organization1Emails.push_back("org@g.com");
    //organization1->SetEmailList(organization1Emails);

    //Person* person1 =new Person();
    //person1->SetFIO("Ivanov ivan Petrovich");
    //person1->Setgender(male);

    //vector<Telephone> person1PhoneList;
    //Telephone person1Phone = Telephone();
    //person1Phone.SetNumber("+380991234567");
    //person1Phone.SetForm(fullForm);
    //person1Phone.SetCategory(mobile);
    //person1PhoneList.push_back(person1Phone);
    //Telephone person1Phone2=Telephone(home,fullForm,"+380486225700");
    //person1PhoneList.push_back(person1Phone2);
    //person1->SetPhoneList(person1PhoneList);



    //vector<string> person1Email;
    //person1Email.push_back("11@g.com");
    //person1->SetEmailList(person1Email);


    //organization1->SetLeader(person1);
    //person1.SetOrganization(organization1);
    //phoneBook.AddOrganizationToList(organization1);
    //phoneBook.AddPersonToList(person1);

    Person* personGetBynumber = phoneBook.GetPersonByNumber("+380991234567");
    if(personGetBynumber!=nullptr)
    {
        personGetBynumber->PrintInformation();
    }
    else cout<<"No person with this number"<<endl;
    vector<Person*> personGetByPartName = phoneBook.GetPersonByPartName("Ivan123");
    for(int i=0;i<personGetByPartName.size();i++)
    {
        personGetByPartName[i]->PrintInformation();
    }
    //Organization organizationByEmail = phoneBook.getOrganizationByEmail("")

    phoneBook.PrintAllInformation();
    return 0;
}
