//
// Created by Pranjal Jamuar on 08/07/25.
//

#include<iostream>
using namespace std;

void powerOfANumber()
{
    int number, power, result = 1;

    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the power you want the result for: ";
    cin >> power;

        if (power == 0)
        {
            cout << result << endl;
        } else
        {
            for (int i = 1; i <= power; i++)
            {
                result *= number;

            }
            cout << result;
        }
}