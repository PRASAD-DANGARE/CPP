/*

Description      :  Use Of Pass-By-Value In C++ 
Function Date    :  6 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer

*/

#include <iostream>

using namespace std;

void f(int a)
{
    cout << "a = " << a << endl;
    a = 5;
    cout << "a = " << a << endl;
}

int main()
{
    int x = 47;
    cout << "x = " << x << endl;
    f(x);
    cout << "x = " << x << endl;
}