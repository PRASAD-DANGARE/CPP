/*
Description      :  Function With Two Generic Types
Function Date    :  10 Dec 2020
Function Author  :  Prasad Dangare
Input            :  Integer,Float
*/

#include <iostream>
#include <string>

using namespace std;

template <class T1, class T2>

void display(T1 x, T2 y)
{
    cout << x << " " << y << "\n";
}

int main()
{
    display(1999, "EBG");
    display(12.34, 1234);

    return 0;
}