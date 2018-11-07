/*  NAME: Nicole Mutia
    DATE: Nov. 7, 2018
    PURPOSE: To determine if the number given by a user is an even or odd number.
*/
#include <iostream>

using namespace std;

//double inputNumber, evenNumber, oddNumber;
int inputNumber, remainder;

int main()
{
    // Greet User
    cout << "Hi there! I can help you determine if a number is even or odd \n\n"<< endl;
    // Ask user to enter a number
    cout << "Enter the number you want to find out if it's odd or even: ";
    cin >> inputNumber;
    // Is the number entered by the user even or odd?
        // Calculation to determine if the number is even or odd
        remainder = inputNumber % 2;
        if ((remainder == 1) || (remainder == -1))
        {
        cout << "You entered an odd number" << remainder << endl;
        }
        else
        {
        cout << "You entered an even number" << remainder << endl;
        }
    return 0;
}
