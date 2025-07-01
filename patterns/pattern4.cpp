//
// Created by Pranjal Jamuar on 01/07/25.
//

#include<iostream>
using namespace std;

void pattern4()
{
    int rows;
    cout << "Enter the number of rows:";
    cin >> rows;

    cout << "Ascending Square Pattern"

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            cout << j * j << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
    cout << "Ascending Cube Pattern"

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            cout << j * j * j << " ";
        }
        cout << endl;
    }
}