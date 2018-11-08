/*  NAME: Nicole Mutia
    DATE: Nov. 7, 2018
    PURPOSE: To determine if the number given by a user is an even or odd number.
*/
#include <iostream>

using namespace std;

// Function prototypes
void mainMenu();
void oddOReven(int);

bool doesTheUserWantToContinue = true;
// The main function
int main()
{
    // Greet User
    cout << "Hi there! I can help you determine if a number is even or odd \n"<< endl;
    mainMenu();
    return 0;
}
void mainMenu()
{
    int mainMenuChoice;
    do
    {
        cout << "\n\nPlease choose an option from the menu below: " << endl;
        cout << "> Enter a number you want to find out if it's odd or even: \n\n";
        cout << "> Press any key if you want to exit \n" << endl;
        cout << "-> ";
        cin >> mainMenuChoice; // Get the user's choice

        // Check if mainMenuChoice is an integer
        if (mainMenuChoice)
        {
            // Compute the integer if it's even or odd
            oddOReven(mainMenuChoice);
        }
        else
        {
            // User did not enter an integer, so prevent from looping again
            doesTheUserWantToContinue = false;
        }
    }
    while(doesTheUserWantToContinue);
}
void oddOReven(int i)
{
    // It gets the remainder
    int remainder = i % 2;
    // If the remainder is equal to 1 or -1, then it's an odd number. Through -1, all negative numbers can be determined if it's odd or even.
    if ((remainder == 1) || (remainder == -1))
    {
        cout << "You entered an odd number" << endl;
    }
    else
    {
        cout << "You entered an even number" << endl;
    }
}
