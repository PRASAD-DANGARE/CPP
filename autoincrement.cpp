/*

Description      :  Use Of Auto-Increment
Function Date    :  6 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer

*/

#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int j = 0;
    cout << ++i << endl; // Pre-Increment
    cout << j++ << endl; // Post-Increment
    printf("\n");

    cout << --i << endl; // Pre-Decrement
    cout << j-- << endl; // Post-Decrement
}