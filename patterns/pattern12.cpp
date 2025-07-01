//
// Created by Pranjal Jamuar on 01/07/25.
//

#include<iostream>
using namespace std;

void pattern12()
{
    int rows;
    cout<<"Enter number of rows : ";
    cin>>rows;
    char ch = 'a';

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << char(ch + i) << " ";
        }
        cout << endl;
    }
}