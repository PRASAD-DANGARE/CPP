/*

Description      :  Use Of Specifiers And Its Bytes 
Function Date    :  6 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Char,Integer,Float,Double

*/

#include <iostream>

using namespace std;

int main()
{
    char c;
    unsigned char cu;
    int i;
    unsigned int iu;
    short int is;
    short iis; // Same As Short Int
    unsigned short int isu;
    unsigned short iisu;
    long int il;
    long iil; // Same As Long Int
    unsigned long int ilu;
    unsigned long iilu;
    float f;
    double d;
    long double ld;

    cout
        << "\n char = " << sizeof(c)
        << "\n unsigned char = " << sizeof(cu)
        << "\n int = " << sizeof(i)
        << "\n unsigned int = " << sizeof(iu)
        << "\n short = " << sizeof(is)
        << "\n unsigned short = " << sizeof(isu)
        << "\n long = " << sizeof(il)
        << "\n unsigned long = " << sizeof(ilu)
        << "\n float = " << sizeof(f)
        << "\n double = " << sizeof(d)
        << "\n long double = " << sizeof(ld)
        << endl;
}