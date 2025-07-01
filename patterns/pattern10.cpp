//
// Created by Pranjal Jamuar on 01/07/25.
//

#include<iostream>
using namespace std;

void pattern10()
{
    int rows;
    cout << "Enter the number of rows:";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << i << " ";
        }
        cout <<endl;
    }
}