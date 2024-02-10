#include <iostream>

using namespace std;

// function to check if variable is positive by true or false
bool isValidInput (int n)
{
    if ( n > 0)
    {
        //returns true if the number is positive
        return true;
    }
    else
    {
        //returns false if the number is negative
        return false;
    }
}
// function to get the minimum value from the three numbers
int GetMin(int x, int y, int z)
{
    int min;

    if ( x < y && x < z)
    {
        min = x;
    }
    else if ( y < x && y < z)
    {
        min = y;
    }
    else
    {
        min = z;
    }
    
    //returns minimum
    return min;
}
int main()
{
    int num,num2,num3;
    int sum = 0;

    cout << "Enter 3 positive numbers: \n\n";

    //takes the three numbers and checks if they're positive
    do
    {
        cout <<"Enter First Number: ";
        cin >> num;
        isValidInput(num);

    } while (isValidInput(num) != true);

    do
    {
        cout <<"Enter Second Number: ";
        cin >> num2;
        isValidInput(num2);
        
    } while (isValidInput(num2) != true);

    do
    {
        cout <<"Enter First Number: ";
        cin >> num3;
        isValidInput(num3);

    } while (isValidInput(num3) != true);
    
    cout << endl;

    // reveals the minimum value out of the three numbers
    cout << "The Minimum variable is in the numbers given is "<< GetMin(num,num2,num3) << endl;
    cout << "Thank you for using this program!";

    return 0;
}