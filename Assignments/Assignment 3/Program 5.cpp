#include <iostream>
using namespace std;

int main ()
{
    /* Problem 5:
        Write a C++ program that uses a while or for loop that prompts the user 
        to enter a high and a low integer and will calculate and display the sum of the odd integers between 
        (and including) these two values. Be careful, the high number must be greater than the low! 
    */
    int hnum;
    int lnum;
    int sum =0;

    //takes big number and low number
    cout << "Enter High Integer: ";
    cin >> hnum;
    cout << "Enter Low Integer: ";
    cin >> lnum;
    
    if (hnum > lnum)
    {
        for(int i = lnum; i <= hnum; i++)
        {
            if ( i % 2 != 0 ) 
            {
                cout << i << " ";
                sum += i;
            }
        }
        cout <<endl << "Sum of odd integers = " << sum;
    }
    else
    {
        cout << "input invalid!";
    }
}