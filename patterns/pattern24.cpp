//
// Created by Pranjal Jamuar on 04/07/25.
//

#include<iostream>
using namespace std;

void pattern24()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int k = 1; k <= 2 * (n - i); k++)
        {
            cout << "  ";
        }
        for (int l = 1; l <= i; l++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int k = 1; k <= 2 * (n - i); k++)
        {
            cout << "  ";
        }
        for (int l = 1; l <= i; l++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}