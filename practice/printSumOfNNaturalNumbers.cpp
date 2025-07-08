//
// Created by Pranjal Jamuar on 08/07/25.
//

#include<iostream>
using namespace std;
 void printSumOfNaturalNumbers()
 {
     int range, sum = 0;
     cout << "Enter the range of natural numbers: ";
     cin >> range;

     for (int i = 1; i <= range; i++)
     {
         sum += i;
     }
     cout << sum;
 }