#include <iostream>
using namespace std;

int main() 
{
    /* Problem 2:
        Write a C++ program that uses a while or for loop that prompts 
        the user to enter a high and a low integer and will
        calculate and display the sum of the integers between 
        (and including) these two values. Be careful, the high
        number must be greater than the low!
    */
    int n1,n2, sum = 0;

    cout << "Big Number should be bigger than Small Number\n";

    // Take in 2 Numbers
    cout << "Enter Big Number: ";
    cin >> n1;

    cout << "Enter Small Number: ";
    cin >> n2;

    if (n1 > n2)
    {
        for (int i = n2 ; i <= n1; ++i)
        //    ^ or i could leave the variable n2 alone but
        // I prefer to equate it to the new variable i
        // because it's more understandable for me
        {
            sum += i;
            // Could also do it sum = sum + i;
        }
        cout << "Sum of integers between them and (including them)= " << sum;
    }
    else
    {
        // if integer n1 is smaller than n2
        // it shows this message and closes the program
        cout << "Input Invalid!";
    }
    
    return 0;
}