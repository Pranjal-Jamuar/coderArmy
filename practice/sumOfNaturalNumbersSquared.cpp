//
// Created by Pranjal Jamuar on 08/07/25.
//

#include<iostream>
using namespace std;

void sumOfNaturalNumbersSquared()
{
    int range, sum = 0;
    cout << "Enter the range of numbers you want to sum: ";
    cin >> range;

    //basic
    // for (int i = 1; i <= range; i++)
    // {
    //     sum += i * i;
    // }
    // cout << sum << endl;

    cout << range * (range + 1) * (2 * range + 1) / 6 << endl;
}