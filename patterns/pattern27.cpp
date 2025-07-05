//
// Created by Pranjal Jamuar on 05/07/25.
//

#include<iostream>
using namespace std;

void pattern27()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

}