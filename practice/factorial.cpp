//
// Created by Pranjal Jamuar on 08/07/25.
//

#include<iostream>
using namespace std;

void factorial()
{
    int number, result = 1;
    cout << "Enter the number whose factorial you want to calculate: ";
    cin >> number;

    if (number == 0 || number == 1)
    {
        cout << "Factorial is : " << result << endl;
    } else
    {
        while (number > 0)
        {
            result *= number;
            number --;
        }
        cout << "The factorial of the given number is: " << result << endl;
    }
}