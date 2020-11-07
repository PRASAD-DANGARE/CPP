/*

Description      :  Void Pointer In C++
Function Date    :  7 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer

*/

#include <iostream>

using namespace std;

int main()
{
    int i = 99;
    void *vp = &i;

    // Can't Dereferance A Void Pointer:
    // *vp = 3; // Compile-Time-Error
    // Must Cast Back To int Before Dereferencing:

    *((int *)vp) = 3;
}