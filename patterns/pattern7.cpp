//
// Created by Pranjal Jamuar on 01/07/25.
//

#include<iostream>
using namespace std;

void pattern7()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    //basic
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            cout << (i - 1) * rows + j<< "  ";
        }
        cout << endl;
    }

    //Better Solution
    for (int i = 1; i <= n * n; i++)
    {
        cout << i << " ";
        if (i % n == 0)
            cout << endl;
    }
}