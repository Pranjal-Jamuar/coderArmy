//
// Created by Pranjal Jamuar on 04/07/25.
//

#include<iostream>
using namespace std;

void tableUsingWhile()
{
    int n;
    cout << "Enter the number whose table you want: ";
    cin >> n;
    int i = 1;

    while (i <= 10)
    {
        cout << n << " x " << i << " = " << n * i << endl;
        i++;
    }
}