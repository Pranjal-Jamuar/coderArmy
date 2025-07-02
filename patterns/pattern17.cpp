//
// Created by Pranjal Jamuar on 02/07/25.
//

#include<iostream>
using namespace std;

void pattern17()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;


    //  Old method

    // for (int i  = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (j < n - i - 1)
    //         {
    //             cout <<"  ";
    //         }
    //         else
    //         {
    //             cout << i + 1<< " " ;
    //         }
    //     }
    //     cout << endl;
    // }

    //Better Method

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j > n - i)
            {
                cout << i << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}