#include <SDL.h>
#include <iostream>
#include <string>

using namespace std;

struct Person
{
    string firstname;
    string lastname;
    string dateOfBirth;
    string address;
};

// Pass by reference
void print_person(Person &per) {
    cout << "User is: " << per.firstname << " " << per.lastname << endl;
    cout << "Address: " << per.address << endl;
    per.dateOfBirth = "11.1.1111";
}

// Pass by value
void print_dob(Person per) {
    cout << "Date of birth: " << per.dateOfBirth << endl;
}

int main(int argc, char* argv[]) {
    struct Person firstPerson = {"Seppo", "Taalasmaa", "24.03.2022", "Helsinki"};

    print_person(firstPerson);
    print_dob(firstPerson);

    return 0;
}