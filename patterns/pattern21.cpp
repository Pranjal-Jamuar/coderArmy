//
// Created by Pranjal Jamuar on 04/07/25.
//

#include<iostream>
using namespace std;

void pattern21()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (2 * n) - 1; j++)
        {
            if ( j < n - i - 1)
            {
                cout << "  ";
            } else if ( j >=i + n)
            {
                cout << "  ";
            } else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}