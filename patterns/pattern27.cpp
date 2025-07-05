//
// Created by Pranjal Jamuar on 05/07/25.
//

#include<iostream>
using namespace std;

void pattern27()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = rows - 1; i >= 0; i--)
    {
        for (int j = 0; j < rows - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

}