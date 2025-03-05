/* 
Amerike University
Author: Ali Angel
Work #: 7
Date: 04/03/2025
Description: This program will ask the user to input a number between 5 and 15 and not allow an incorrect answer, it will then ask for
a name with less than 10 letters and a number divisible by 7
*/
#include <iostream>
#include <string>

using namespace std;

int main (){
    int num1,num2;
    string name;

    cout << "Write a number between 5 and 15: ";
    cin >> num1;

    while(num1 < 5 || num1 > 15)
    {
        cout << "Invalid number, try again: ";
        cin >> num1;
    }
    cout << "Valid Number\n";
    cout << "Now write a name no bigger than 10 letters: ";
    cin >> name;

    while(name.length() > 10)
    {
        cout << "Name exceeds letter requirement, try again: ";
        cin >>name;
    }
    cout << "Valid name\n";
    cout << "Now write a number that is divisible by 7: ";
    cin >> num2;

    while(num2 % 7 != 0)
    {
        cout << "Inputted number is not divisible by 7, try again: ";
        cin >> num2;
    }
    cout << "Valid Number";

    return 0;
}
