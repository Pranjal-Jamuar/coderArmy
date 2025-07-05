//
// Created by Pranjal Jamuar on 04/07/25.
//

#include<iostream>
using namespace std;

void pattern26()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // with index starting from 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // with index starting from 0;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 0; k < i + 1; k++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    //
//     for (int i = n - 2; i >= 0; i--)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         for (int k = 0; k < i + 1; k++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
}