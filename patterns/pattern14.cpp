//
// Created by Pranjal Jamuar on 02/07/25.
//

#include<iostream>
using namespace std;

void pattern14()
{
    int rows;
    cout << "Enter number of rows : ";
    cin>>rows;

    for (int i = rows; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}