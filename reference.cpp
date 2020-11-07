/*

Description      :  Use Of Reference In C++
Function Date    :  7 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer

*/

#include <iostream>

using namespace std;

void f(int &r)
{
    cout << "r = " << endl;
    cout << "&r = " << &r << endl;
    r = 5;
    cout << "r = " << r << endl;
}

int main()
{
    int x = 47;
    cout << "x = " << x << endl;
    cout << "&x = " << &x << endl;
    f(x);                        // Pass By Value
    cout << "x = " << x << endl; // Pass By Reference
}