#include <iostream>
using namespace std;

int main ()
{
    int a; int b; int c;
    cout << "Input Three numbers: "; 
    // let user input three numbers
    cin >> a >> b >> c;

    // if statement to see the middle number
    // middle number is usually the number thats bigger than the smallest
    // and smaller than the largest
    //ex: a < b < c
    // here b is the median


    // to translate it into code we have to write it in this form

    if ((a > b && a < c) || (a < b && a > c))
    {
        cout << "The Number " << a << " is the Median";
    }
    else if ((a > b && b > c) || (a < b && b < c))
    {
        cout << "The Number " << b << " is the Median";
    }
    else if ((a < c && b > c) || (a > c && b < c))
    {
        cout << "The Number " << c << " is the Median";
    }
    else
    {
        cout << "No Median Variable";
    }
    return 0;
}