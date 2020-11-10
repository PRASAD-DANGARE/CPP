/*

Description      :  Display The Given Number Into Binary
Function Date    :  10 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Binary

*/

#include "printBinary.cpp"
#include <iostream>

using namespace std;

#define PR(STR, EXPR)  \
    cout << STR;       \
    printBinary(EXPR); \
    cout << endl;

int main()
{
    unsigned int getval;
    unsigned char a, b;
    cout << "Enter A Number Between 0 To 255 : ";
    cin >> getval;
    a = getval;

    PR("Binary Value Is : ", a);
    cout << "Enter A Number Between 0 And 255 : ";
    cin >> getval;
    b = getval;

    PR("Binary Value Of 2 Number Is : ", b);
    PR("a | b = ", a | b);
    PR("a & b = ", a & b);
    PR("a ^ b = ", a ^ b);
    PR("~a = ", ~a);
    PR("~b = ", ~b);

    unsigned char c = 0x5A;
    PR("Binary Of This Is : ", c);
    a |= c;
    PR("a |= c; a = ", a);
    b &= c;
    PR("b &= c; b = ", b);
    b ^= a;
    PR("b ^= a; b = ", b);
}
