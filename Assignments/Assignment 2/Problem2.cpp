#include <iostream>
using namespace std;

int main()
{
    string fname; 
    string lname;
    int age; 
    float ht; 
    string major; 
    string univ;
    
    cout << "Enter Your First Name: "; cin >> fname;
    cout << "Enter Your Last Name: "; cin >> lname;
    cout << "Enter Your Age (integer): "; cin >> age;
    cout << "Enter Your Height (include decimal point): "; cin >> ht;
    cout << "Enter Major (CS - CE - MICT - IB - Business - Finance - Psychology): "; cin >> major;
    cout << "Enter University (Three letter Abbreviating ie: MIT): "; cin >> univ;

    cout << "====================================================================================\n";

    cout << "User's Name: " << fname << " " << lname << "\n";
    cout << "User's Age: " << age << "\n";
    cout << "User's Height: " << ht << "\n";
    cout << "User's Major and University: \n";
    cout << "============================\n";
    cout << "Major: " << major << " \nUniversity: " << univ << "\n";
}