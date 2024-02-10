#include <iostream>

using namespace std;

int main ()
{
    /* Problem 3: 
        Write a C++ program that uses a while loop to ask the user 
        for an unknown number of integer numbers. Once the user types in -1,
        stop the loop and display the average of the numbers.
    */
    int x;
    double sum = 0.0;
    double avg;
    int total=0 ;

    // tells user to enter a number
    cout << "Enter a Number: ";

    
    while ( x != -1 )
    {
        //takes numbers
        cin >> x;
        //checks if number isn't -1 to reveal the message
        if (x != -1)
        {
            // shows another one instead of showing Enter a number once only
            cout << "Another one: ";
        }
        //calculates the sum
        sum += x;
        total++;
    }
    //average = sum / total amount
    avg = sum / total;

    // cout's the average 
    cout << "The Average of the numbers is "<< avg <<endl;
}