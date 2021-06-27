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
    system("clear"); // очищаем экран
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
 cout << "13.Find person by email\n";
 cout << "14.find person by full name\n";
 cout << "15.find person by part name\n";
 cout << "16.find organization by name\n";
 cout << "17.find organization by phone\n";
 cout << "18.find organization by email\n";
 cout << "19. EXIT" << "\n";
}


int main()
{

    int variant = 0;
    PhoneBook phoneBook = PhoneBook();
    //phoneBook.AddPersonToList(new Person("Ivanov ivan Petrovich",male,nullptr));
    do
    {
        print_menu();
        variant = get_variant(19);
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
        case 10:phoneBook.DeletePersonByIndex(phoneBook.choosePerson());
                break;
        case 11:phoneBook.DeleteOrganizationByIndex(phoneBook.chooseOrganization());
                break;
        case 12:phoneBook.FindPersonsByNumber();
                break;
        case 13:phoneBook.FindPersonsByEmail();
                break;
        case 14:phoneBook.FindPersonsByFullName();
                break;
        case 15:phoneBook.FindPersonsByPartName();
                break;
        case 16:phoneBook.FindOrganizationsByName();
                break;
        case 17:phoneBook.FindOrganizationsByNumber();
                break;
        case 18:phoneBook.FindOrganizationsByEmail();
                break;
        }

    } while (variant!=19);
    return 0;
}
