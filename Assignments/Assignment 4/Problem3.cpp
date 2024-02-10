#include <iostream>
using namespace std;

int main ()
{ 

    // shows the numbers hour and minutes in a day
    // hour:minute
    
    for (int hrs = 0; hrs < 24; hrs++)
    {
        
        for (int min = 0; min < 60; min++)
        {
            cout << hrs << ":";
            cout << min << endl;
        }

    }
    return 0;
}