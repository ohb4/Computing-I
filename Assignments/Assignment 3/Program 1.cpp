#include<iostream>
using namespace std;

int main ()
{
    /*  Problem 1:
        Write a C++ program that takes a character from the user. The program should output:
            1. “Small letter” when input is a small letter (a-z)
            2. “Capital letter” when the input is a capital letter (A-Z)
            3. If the user entered any other character, the program should print “Not defined!”
        In all cases, the program should print “GoodBye!” on the screen before terminating.
    */
    
    
    //declaring the type in char to enter a variable
	char ch; 
	cout<<"Enter a character: ";
	cin>>ch;

    // Using the ASCII table to see whether the variable is Capital
    // Small or another type of character


    // In ASCII Table the ASCII values for capital letters
    // is from 65 to 90
	if (ch>=65 && ch<=90)
    {
        cout<< "Capital letter";
    }
    // In ASCII Table the ASCII values for small letters
    // is from 97 to 122
	else if (ch>=97 && ch<=122)
    {
        cout<< "Small letter";
    }
    // anyother char shows this message
    else
    {
        cout << "Not Defined!";
    }

    cout << "\nGoodbye!";
	return 0;
}