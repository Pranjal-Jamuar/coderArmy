//
// Created by Pranjal Jamuar on 02/07/25.
//

#include<iostream>
using namespace std;

void pattern15()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = rows; i >= 0; i--)
    {
        for (int j = rows; j > i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}