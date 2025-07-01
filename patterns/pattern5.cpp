//
// Created by Pranjal Jamuar on 01/07/25.
//

#include<iostream>
using namespace std;

void pattern5()
{
    int rows;
    char ch = 'a';
    cout << "Enter the number of rows:";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            cout << char(ch + (i -1)) << " ";
        }
        cout <<  endl;
    }
}