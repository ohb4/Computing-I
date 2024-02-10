#include <iostream>
using namespace std;

void print (int values[]);
void sort (int values[]);

int main()
{

    int const size = 100;
    int *A;

    A = new int [size];

    cout << "Before Sorting: " << endl << endl;

    for(int i = 0 ; i < size ; i++)
    {
        A[i] = rand() % 101; // since it's 100 elements might aswell make it 100 random numbers between 0 and 100
        
        cout<<A[i]<<" ";
    }

    cout << endl << endl;

    sort(A);

    cout << "After Sorting: " << endl << endl;

    print(A);

    delete [] A; // deletes the array

    return 0;
}

void sort (int values[])
{
    // sorts the array variables in ascending order
    
    for(int i = 0; i < 100 ; i++)
	{		
		for(int j = i+1; j < 100 ; j++)
		{
			if( values[i]>values[j] )
			{
				int temp  = values[i];
				values[i] = values[j];
				values[j] = temp;
			}
		}
	}

    // this is bonus if you want the array to be decending order too!

    /*
    for(int i=0;i< 100 ;i++)
	{		
		for(int j = i+1;j< 100;j++)
		{
			if( values[i]<values[j] )
			{
				int temp  = values[i];
				values[i] = values[j];
				values[j] = temp;
			}
		}
	}
    */
}

void print (int values[])
{
    for(int i = 0 ; i < 100 ; i++)
    {
        cout<<values[i]<<" ";
    }
}