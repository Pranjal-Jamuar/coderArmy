//
// Created by Pranjal Jamuar on 01/07/25.
//

#include<iostream>
using namespace std;

void pattern3()
{
    int rows;
    cout << "Enter the number of rows:";
    cin >> rows;
    cout << "Descending Number Pattern"

     for (int i  = 1; i <= rows; i++)
     {
         for (int j = rows; j >= 1; j--)
         {
             cout << j << " ";
         }
         cout << endl;
     }
}