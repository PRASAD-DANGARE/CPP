/*
Description      :  Manipulator Of Pointer
Function Date    :  2 Dec 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a = 10, *ptr;
    ptr = &a;

    cout << "The Value Of a Is : " << a;
    cout << "\n\n";

    *ptr = (*ptr)/2;
    cout << "The Value Of a Is : " << (*ptr);
    cout << "\n\n";

    return 0;
}