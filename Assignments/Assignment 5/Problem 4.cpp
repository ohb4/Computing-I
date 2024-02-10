#include <iostream>
using namespace std;

bool isPalindrome(int array[]);

int main() 
{

    int a[7];
    
    cout << "Enter array variables: ";
    for (int i = 0; i < 7; i++)
    {
        do
        {
            cin >> a[i];
        } while (a[i] < 0 || a[i] > 9);
    }
    cout << endl;

    if (isPalindrome (a) == true)
    {
        cout << "It is Palindrome!";
    }
    else
    {
        cout << "It is not Palindrome!";
    }

    return 0;
}

bool isPalindrome(int array[]) 
{
    for (int i = 0; i < 3.5 ; i++) 
    {
        if (array[i] != array[ 6 - i]) 
        {
            return false;
        }
    }
    
    return true;
    
}