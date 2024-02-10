#include <iostream>

using namespace std;

int main ()
{
    /* Problem 4:
        The Fibonacci Series in mathematics is defined as a sequence of numbers in 
        which each number is the sum of the two preceding ones, starting from 0 and 1. 
        Your Math-major friend needs your help to develop a C++ program that can generate N numbers in the Fibonacci series. 
        For an example, if when N=7, a sequence of (0, 1, 1, 2, 3, 5, 8) is displayed on the screen. 
        Your program should work for any arbitrary N. It should also handle any user input validation you see fit. 
        Write your program using 2 different types of loops. multiplication, division and you must put
        the answer in "result". 
    */
    int N; // number entered by user
    int num1 = 0; // initial number in the sequence
    int num2 = 1; // second initial number in the sequence
    int num3; 

    cout << "Enter Sequential Number: ";
    cin >> N; // takes the number from the user

    cout << "\nResults: \n========\n\n";

    cout << "\tFor Loop: \n\t=========\n"; // shows the first loop used "For Loop"

    cout << "\t" << num1 << " " << num2 << " ";

    for (int i = 2; i < N ; i++ ) // initiallizing i by two because the sequence starts from 2 as we have ( 0 and 1 )
    {
        num3 = num1 + num2; 
        cout << num3 << " ";
        num1 = num2; // changes the numbers by initializing it to the number before
        num2 = num3;
    }

    cout << endl << endl;

    int x1 = 0, x2 = 1, x3 = 0; // declaring new variables to not get confused
    cout << "\tWhile Loop:\n\t===========\n"; // shows the second loop used "While Loop"

    cout << "\t" << x1 << " " << x2 << " ";
    x3 = x1 + x2;

    while ( 0 < N-2) // -2 because we already have the first 2 in the sequence ( 0 1 )
    {
        cout << x3 << " "; // outputs the sequence
        x1 = x2; // changes the numbers by initializing it to the number before
        x2 = x3;
        x3 = x1 + x2;
        N--; //decrements the N till the expression becomes false
    }
    cout << endl;
}