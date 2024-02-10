#include <iostream>

using namespace std;

int main ()
{
    int x[4][6];
    int z = 24;
    int sum =0;
    double average;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            int temp = z--;
            x [i][j] = temp;

            cout << "\t" << x [i][j];
        }
        cout << endl;
    }
    
    cout << endl << endl;

    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 6; j++) 
        {
            sum = sum + x[i][j];
        }
        cout << "\t\t  Sum of the row " << i+1 << " = " << sum << endl;
        sum = 0;
    }

    cout << endl;

    cout << endl;


    for (int j = 0; j < 6; j++) 
    {
        for (int i = 0; i < 4; i++) 
        {
            sum = sum + x[i][j];
            average = sum / 6.0;
        }
        cout << "\t\tAverage of Column " << j+1 << " = " << average << endl;

        sum = 0;
    }


    return 0;
}