//
// Created by Pranjal Jamuar on 01/07/25.
//

#include<iostream>
using namespace std;

void pattern2()
{
    int rows;
    cout << "Enter number of rows:";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            cout << j << " ";
        }
    cout <<  endl;
    }
}