/*

Description      :  Creating Pointer And Print Address Of Its Elements.
Function Date    :  6 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer

*/

#include <iostream>

using namespace std;

int dog, cat, bird, fish;

void f(int pet)
{
    cout << "pet id number : " << pet << endl;
}

int main()
{
    int i, j, k;

    cout << "f() : " << (long)&f << endl;
    cout << "dog : " << (long)&dog << endl;
    cout << "cat : " << (long)&cat << endl;
    cout << "fish : " << (long)&fish << endl;
    printf("\n");

    cout << "i : " << (long)&i << endl;
    cout << "j : " << (long)&j << endl;
    cout << "k : " << (long)&k << endl;
}