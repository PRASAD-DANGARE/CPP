/*
Description      :  Example Of Using Pointer
Function Date    :  2 Dec 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a, *ptr1, **ptr2;

    ptr1 = &a;
    ptr2 = &ptr1;

    cout << "The Address Of a : " << ptr1 << "\n";
    cout << "The Address Of ptr1 : " << ptr2;
    cout << "\n\n";
    cout << "After Incrementing The Address Value : \n\n";
    ptr1 += 2;
    cout << "The Address Of a : " << ptr1 << "\n";
    ptr2 += 2;
    cout << "The Address Of ptr1 : " << ptr2 << "\n";

    return 0; 
}