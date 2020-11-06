/*

Description      :  Use Of Pass-By-Address In C++ 
Function Date    :  6 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer

*/

#include <iostream>

using namespace std;

void f(int *p)
{
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    *p = 5;
    cout << "p = " << p << endl;
}

int main()
{
    int x = 47;
    cout << "x = " << x << endl;
    cout << "&x = " << &x << endl;
    f(&x);
    cout << "x = " << x << endl;
}