#include <iostream>

using namespace std;

int main ()
{
    char ans;
    int count = 0;
    
    /* Problem 1: */
    do
    {
        cout << "Question 1: \n";
        cout << "===========\n";
        cout << "1. The following are components of a Computer: \n";
        cout << "\t a. CPU\n";
        cout << "\t b. RAM\n";
        cout << "\t c. Router\n";
        cout << "\t d. All of the above\n";
        cout << "\t e. Only a & b are correct\n\n";

        cout << "Your answer is: ";
        cin >> ans;

    } while ( ans != 'a' && ans != 'b' && ans != 'c' && ans != 'd' && ans != 'e'); // makes sure that the answer is within the options
           
    if (ans == 'e') // if it's the correct answer it'll increase the counter, if it's not it'll stay the same
    {
        cout << "Correct!\n\n";
        count++;
    }
    else
    {
        cout << "Wrong! ;(\n";
        cout << "The correct answer was E\n\n";
    }

    /*===================================================================================*/

    /* Problem 2: */

    do
    {
        cout << "Question 2: \n";
        cout << "===========\n";
        cout << "2. RAM is an Acronym for: \n";
        cout << "\t a. Random Access Memory\n";
        cout << "\t b. Read Only Memory\n";
        cout << "\t c. Random Articulation Machine\n";
        cout << "\t d. None of the above\n";

        cout << "Your answer is: ";
        cin >> ans;

    } while ( ans != 'a' && ans != 'b' && ans != 'c' && ans != 'd'); // makes sure that the answer is within the options
           
    if (ans == 'a') // if it's the correct answer it'll increase the counter, if it's not it'll stay the same
    {
        cout << "Correct!\n\n";
        count++;
    }
    else
    {
        cout << "Wrong! ;(\n";
        cout << "The correct answer was A\n\n";
    }

    /*===================================================================================*/

    /* Problem 3: */

    do
    {
        cout << "Question 3: \n";
        cout << "===========\n";
        cout << "3. The result of logical AND is false when: \n";
        cout << "\t a. All of the operands are false\n";
        cout << "\t b. Only one of the operands is true\n";
        cout << "\t c. Both of the operands are true\n";
        cout << "\t d. None of the operatiors are false\n";

        cout << "Your answer is: ";
        cin >> ans;

    } while ( ans != 'a' && ans != 'b' && ans != 'c' && ans != 'd'); // makes sure that the answer is within the options
           
    if (ans == 'a') // if it's the correct answer it'll increase the counter, if it's not it'll stay the same
    {
        cout << "Correct!\n\n";
        count++;
    }
    else
    {
        cout << "Wrong! ;(\n";
        cout << "The correct answer was A\n\n";
    }

    cout << "Your Grade is: "<< count << "/3"; //reveals grade

    return 0;
}