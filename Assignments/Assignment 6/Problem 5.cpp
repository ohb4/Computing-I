#include <iostream>

using namespace std;

int main ()
{
    int value1 = 100, value2;

    int *iPtr;

    iPtr = &value1;

    cout << *iPtr << endl;
    
    value2 = *iPtr;

    cout << value2 << endl;

    cout << &value1 << endl;

    cout << &iPtr << endl;

    // if i wanted the same address i would have
    // put &*iPtr or just iPtr instead of &iPtr
    
    return 0;
    
}