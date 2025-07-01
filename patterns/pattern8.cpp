//
// Created by Pranjal Jamuar on 01/07/25.
//

// Medium Level

#include<iostream>
using namespace std;

void pattern8()
{
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

