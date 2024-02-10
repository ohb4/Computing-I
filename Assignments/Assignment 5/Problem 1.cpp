#include <iostream>
using namespace std;

int FindMaxMin (int arr[])
{
    int min = arr[0];

    for (int i = 1; i < 7; i++)
    {
        if ( min > arr[i])
        {
            min = arr[i];
        }
        else
        {}
    }

    int max = arr[0];

    for (int i = 1; i < 7; i++)
    {
        if ( max < arr[i])
        {
            max = arr[i];
        }
        else
        {}
    }

    cout << "Maximum: "<< max << endl;
    cout << "Minimum: ";

    return min;
}

int GetMin(int arr[])
{
    int min = arr[0];

    for (int i = 1; i < 7; i++)
    {
        if ( min > arr[i])
        {
            min = arr[i];
        }
        else
        {}
    }
    return min;
}

int GetMax(int arr[])
{
    int max = arr[0];

    for (int i = 1; i < 7; i++)
    {
        if ( max < arr[i])
        {
            max = arr[i];
        }
        else
        {}
    }
    return max;
}
int main ()
{
    const int Num = 7;
    int a[Num];
    int i;

    cout << "Enter 7 Numbers:"<< endl;

        for( i = 0; i < 7 ; i++)
        {
            do
            {
                cout << "Enter value: ";
                cin >> a[i];
            } while (a[i] < 0 || a[i] > 20);
        }

    cout << endl;

    cout << "MaxMin Function: " <<  endl << FindMaxMin(a) << endl;
    cout << endl;
    cout << "GetMin and GetMax functions" << endl;
    cout << "Minimum Value in Array: "<< GetMin (a) << endl;
    cout << "Maximum Value in Array: "<< GetMax (a) << endl;

    return 0;
}