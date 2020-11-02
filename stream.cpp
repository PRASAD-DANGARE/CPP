/*

Description      :  More Stream Features
Function Date    :  2 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer,Float,Char

*/

#include <iostream>

using namespace std;

int main()
{
    cout << "A Number In Decimal : "
         << dec << 15 << endl;

    cout << "In Octal : " << oct << 15 << endl;
    cout << "In Hex : " << hex << 15 << endl;

    cout << "A Floating-Point Number : "
         << 3.14159 << endl;
    cout << "Non-Printing Char (escape) : "
         << char(27) << endl;
}