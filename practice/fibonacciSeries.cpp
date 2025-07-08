//
// Created by Pranjal Jamuar on 08/07/25.
//

#include<iostream>
using namespace std;

int fibonacciSeries(int num)
{

    //Version 1

    // int n;
    // cout << "Enter the range: ";
    // cin >> n;
    //
    // int a = 0, b = 1;
    //
    // if (n <= 0) return;
    //
    // cout << "Fibonacci Series: ";
    //
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a << " ";
    //     int next = a + b;
    //     a = b;
    //     b = next;
    // }
    // cout << endl;

    //Recursive Version

    if (num == 0) return 0;
    if (num == 1) return 1;
    return fibonacciSeries(num - 1) + fibonacciSeries(num - 2);
}