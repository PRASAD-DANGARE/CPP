/*

Description      :  Subtraction Of Two Values In C++
Function Date    :  3 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer

*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, sub;

    cout << "Enter Two Integers Value For Subtraction : ";
    cin >> a >> b;

    sub = a - b;

    cout << a << " - " << b << " = " << sub;

    return 0;
}