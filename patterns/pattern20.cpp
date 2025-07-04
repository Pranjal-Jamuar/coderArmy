//
// Created by Pranjal Jamuar on 04/07/25.
//

#include<iostream>
using namespace std;

void pattern20()
{
    int n;
    cout << "Enter the number of rows: ";
    cin  >> n;

    // with 3 for loops
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int k = i; k >= 1; k--)
    //     {
    //         cout << k << " ";
    //     }
    //     cout << endl;
    // }

    //with 2 for loops
    for (int i = 1; i <= n; i++)
    {
        // Only one inner loop
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
                cout << "  ";
            else
                cout << n - j + 1 << " ";
        }
        cout << endl;
    }
}
