/*

Description      :  Calling This In bitwise.cpp 
Function Date    :  10 Nov 2020
Function Author  :  Prasad Dangare
Input            :  --

*/

#include <iostream>

void printBinary(const unsigned char val)
{
    for (int i = 7; i >= 0; i--)
        if (val & (1 << i))
            std::cout << "1";
        else
            std::cout << "0";
}