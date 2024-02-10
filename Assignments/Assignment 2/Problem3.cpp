#include <iostream>
using namespace std;

int main ()
{
    int age;
    cout << "Bank Verification:\n";
    cout << "==================\n";
    cout << "Please Enter Your age: "; cin >> age;

    // created if statements to verify the age
    if (age >= 21)
    {
        cout << "You are eligible for a credit card at the bank! \n";
    }
    else if (age < 21 && age > 0)
    {
        cout << "You are not eligible for a credit card at the bank \n";
    }
    else
    {
        // if client puts 0 or a negative number
        // the program will show this message
        cout << "Invalid Age Number! \n";
    }
}