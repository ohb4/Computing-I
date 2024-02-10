#include<iostream>
using namespace std;


int main()
{
    int arr[4];
    int i;

    cout<<"Enter 5 numbers: \n";

    for(i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }

    cout << endl;
    cout<<"Original: ";

    for(i = 0; i < 5; i++)
    {
        cout<<arr[i];
    }

    cout << endl << endl;

    cout<<"Reversed: ";

    for(i = 4; i >= 0; i--)
    {
        cout<<arr[i];
    }

    cout<<endl;

    return 0;
}