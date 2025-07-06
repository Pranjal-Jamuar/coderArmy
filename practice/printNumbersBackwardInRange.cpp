//
// Created by Pranjal Jamuar on 06/07/25.
//

#include<iostream>
using namespace std;

void printNumbersBackwardInRange()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    for (int i = num; i > 0; i--)
    {
        cout << i << " ";
    }
}