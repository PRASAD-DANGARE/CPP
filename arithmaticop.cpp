/*
Description      :  Arithmatic Operations On Pointer
Function Date    :  2 Dec 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num[] = {56, 75, 22, 18, 90};
    int *ptr;
    int i;

    cout << "The Array Values Are :\n";
    for(i = 0; i < 5; i++)
    cout << num[i] << "\n";
    ptr = num;

    cout << "\n Value Of ptr : " << *ptr;
    cout << "\n";
    
    ptr++;
    cout << "\n Value Of ptr++ : " << *ptr;
    cout << "\n";
    
    ptr--;
    cout << "\n Value Of ptr-- : " << *ptr;
    cout << "\n";
    
    ptr = ptr + 2;
    cout << "\n Value Of ptr+2 : " << *ptr;
    cout << "\n";

    ptr = ptr - 1;
    cout << "\n Value Of ptr-1 : " << *ptr;
    cout << "\n";

    ptr += 3;
    cout << "\n Value Of ptr+=3 : " << *ptr;

    ptr -= 2;
    cout << "\n";
    cout << "\n Value Of ptr-=2 : " << *ptr;
    cout << "\n";

    return 0;
}