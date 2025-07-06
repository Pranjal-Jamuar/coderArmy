//
// Created by Pranjal Jamuar on 06/07/25.
//

#include<iostream>
using namespace std;

void printNumbersInRange()
{
    int lowerBound, upperBound;
    cout << "Enter lower bound: ";
    cin >> lowerBound;
    cout << "Enter upper bound: ";
    cin >> upperBound;

    for (int i = lowerBound; i <= upperBound; i++)
    {
        cout << i << " ";
        cout <<endl;
    }
}