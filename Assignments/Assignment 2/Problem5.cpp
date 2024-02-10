#include <iostream>
using namespace std;

int main()
{
    // cox : means x-coordinate 
    int cox;
    // coy : means y-coordinate 
    int coy;

    cout << "Enter Coordinate (x): "; cin >> cox; // we let the user enter the X-coordinate
    cout << "Enter Coordinate (y): "; cin >> coy; // we let the user enter the Y-coordinate
    cout << endl;

    if ((coy > 0) && (cox > 0))
    {
        // if the 2 numbers are positive this statement will show
        cout << "The Point is in Quadrant I \n";
    }
    else if ((coy > 0) && (cox < 0))
    {
        // if the y-coordinate is positive and 
        // the x-coordinate is negative it'll show this message
        cout << "The Point is in Quadrant II \n"; //
    }
    else if ((coy < 0) && (cox < 0))
    {
        // if both coordinates are negative it'll show this message
        cout << "The Point is in Quadrant III \n";
    }
    else if ((coy < 0) && (cox > 0))
    {
        // if the x-coordinate is positive and 
        // the y-coordinate is negative it'll show this message
        cout << "The Point is in Quadrant IV \n";
    }
    else if ((cox == 0) && ((coy < 0) || (coy > 0)))
    {
        // if the x-coordinate = 0 and the y-coordinate is any value
        // this message will appear
        cout << "The Point is On The Y-Axis \n";
    }
    else if ((coy == 0) && ((cox < 0) || (cox > 0)))
    {
        // if the y-coordinate = 0 and the x-coordinate is any value
        // this message will appear
        cout << "The Point is On The X-Axis \n";
    }
    else if ((coy == 0) && (cox == 0))
    {
        // if both points are 0 that means the point is on the origin
        // and this message will show
        cout << "The Point is the Origin";
    }
    return 0;
}