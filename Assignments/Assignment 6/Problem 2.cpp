#include <iostream>
using namespace std;
double av (int arr[], int size);

int main ()
{
    int size;
    int *arr;

    cout << "Enter Array Size: ";
    cin >> size;

    arr = new int [size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "The Average is " << av(arr, size);

    delete [] arr;

    return 0;
}

double av (int arr[], int size)
{
    double average;
    double sum = 0.0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i]; 
    }
    
    average = sum / size;

    return average;
}