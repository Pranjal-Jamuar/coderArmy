//
// Created by Pranjal Jamuar on 06/07/25.
//

#include<iostream>
using namespace std;

void printCharactersInRange()
{
    char lowerBound, upperBound;
    cout << "Enter lower bound character: ";
    cin >> lowerBound;
    cout << "Enter upper bound character: ";
    cin >> upperBound;

    for (char i = lowerBound; i <= upperBound; i++)
    {
        cout << i << " ";
        cout << endl;
    }

}