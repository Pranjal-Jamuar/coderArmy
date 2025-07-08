//
// Created by Pranjal Jamuar on 08/07/25.
//

#include<iostream>
using namespace std;

void fibonacciSeries()
{
    int n;
    cout << "Enter the range: ";
    cin >> n;

    int a = 0, b = 1;

    if (n <= 0) return;

    cout << "Fibonacci Series: ";

    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}