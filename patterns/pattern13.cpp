//
// Created by Pranjal Jamuar on 02/07/25.
//

#include<iostream>
using namespace std;

void pattern13()
{
    int rows;
    cout<<"Enter number of rows : ";
    cin>>rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = rows; j > i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}