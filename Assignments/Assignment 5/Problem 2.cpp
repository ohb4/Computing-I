#include <iostream>
#include <cmath>

using namespace std;

long double pwer(long double y, long double n);

int main()
{
    long double base, power;

    cout << "Enter base number: ";
    cin >> base;

    cout << "Enter power number (has to be positive): ";
    cin >> power;

    cout << pwer(base, power);

    return 0;
}

long double pwer(long double y, long double n)
{
    if (n != 0)
    {
        return (y*pwer(y, n-1));
    }
    else
    {
        return 1;
    }
}