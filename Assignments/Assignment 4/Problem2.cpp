#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() 
{  
    srand(time(0));  // random number generator.
    int num = (rand() % 50) - 50; // creating the barier from -50 to 50
    int tries = 6; // tries the user has
    int guess; // the guess


    cout << "Welcome to the guessing game!\n"; // welcoming message

    
    while (tries != 0)
    {
        do
        {
            cout << "Enter a number between (-50 - 50): ";
            cin >> guess; // number entering
            
            if (guess > num)
            {
                cout << "Number is Lower!\n\n";//tells the user that the number is lower than the input
            }
            else if (guess < num)
            {
                cout << "Number is Higher!\n\n";//tells the user that the number is higher than the input
            }
            else
            {
                cout << "\nCorrect!"; //shows if the user got the number
            }
            tries--;// decrements the number of guesses

        } while (guess != num && tries != 0);
    }

    if (guess != num)
    {
        cout << "\nUnlucky! The Number was "<<num << endl;
        cout << "Better Luck Next time!" << endl;
    }
    else
    {
        cout << "\nThe Number Indeed was "<< num << "!";
    }

	return 0;
}