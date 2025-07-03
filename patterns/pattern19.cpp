//
// Created by Pranjal Jamuar on 03/07/25.
//

#include<iostream>
using namespace std;

void pattern19()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    char ch = 'A';

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j > n - i)
            {
                cout << char(ch + (j - (n - i)) - 1) << " ";
            } else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}