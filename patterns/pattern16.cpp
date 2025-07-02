//
// Created by Pranjal Jamuar on 02/07/25.
//

#include<iostream>
using namespace std;

void pattern16()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    // gpt code
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if (j < rows - i - 1)
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

// My code that worked

// #include<iostream>
// using namespace std;
//
// void pattern16()
// {
//     int rows;
//     cout << "Enter number of rows: ";
//     cin >> rows;
//
//     for (int i = rows; i > 0; i--)
//     {
//         for (int j = rows; j >= 0; j--)
//         {
//             if ( i + j > rows)
//             {
//                 cout << "  ";
//             } else
//             {
//                 cout << "* ";
//             }
//         }
//         cout << endl;
//     }
// }
