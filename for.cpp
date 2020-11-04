/*

Description      :  Use Of For-Loop In C++
Function Date    :  4 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer

*/

#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 128; i = i + 1)
        if (i != 26) // ANSI Terminal Clear Screen
            cout << "value : " << i
                 << "character : "
                 << char(i) // Type Conversion
                 << endl;
}