//
// Created by Pranjal Jamuar on 01/07/25.
//

#include<iostream>
using namespace std;

void pattern6()
{
    int rows;
    cout << "Enter the number of rows:";
    cin >> rows;
    char ch = 'a';

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            cout << char(ch + (j - 1)) << " ";
        }
        cout << endl;
    }
}