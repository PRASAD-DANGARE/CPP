/*
Description      :  Use Of Scope Resolution 
Function Date    :  23 Nov 2020
Function Author  :  Prasad Dangare
Input            :  String,Integer
*/


#include <iostream>

using namespace std;

int m = 10; // global m

int main()
{
    int m = 20; // local to main
    {
        int k = m;
        int m = 30; // m declare again, local to inner block

        cout << "we are in inner block \n";
        cout << "k = " << k << "\n";
        cout << "m = " << m << "\n";
        cout << "::m = " << ::m << "\n";
    }

    cout << "\n we are in outer block \n";
    cout << "m = " << m << "\n";
    cout << "::m = " << ::m << "\n";

    return 0;

}