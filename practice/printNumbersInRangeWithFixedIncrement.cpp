//
// Created by Pranjal Jamuar on 08/07/25.
//

#include<iostream>
using namespace std;

void printNumbersInRangeWithFixedIncrement()
{
    int lowerBound, upperBound, incrementValue;

    cout << "Enter lower bound: ";
    cin >> lowerBound;
    cout << "Enter upper bound: ";
    cin >> upperBound;
    cout << "Enter increment: ";
    cin >> incrementValue;

    for (int i = lowerBound; i <= upperBound; i = i + incrementValue)
    {
        cout << i << " ";
        cout << endl;
    }
}