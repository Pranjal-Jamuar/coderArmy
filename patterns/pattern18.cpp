//
// Created by Pranjal Jamuar on 02/07/25.
//

#include<iostream>
using namespace std;

void pattern18()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j > n - i)
            {
                cout << j - (n - i)<< " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}