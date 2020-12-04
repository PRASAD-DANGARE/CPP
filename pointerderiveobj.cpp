/*
Description      :  Pointer To Derived Objects
Function Date    :  4 Dec 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include <iostream>

using namespace std;

class BC
{
    public:
        int b;
        void show()
        {
            cout << "B = " << b << "\n";
        }
};

class DC : public BC
{
    public:
        int d;
        void show()
        {
            cout << "B = " << b << "\n"
                 << "D = " << d << "\n";
        }
};

int main()
{
    BC *bptr;
    BC base;
    bptr = &base;

    bptr->b = 100;
    cout << "BPTR Points To Base Object \n";
    bptr -> show();

    DC derived;
    bptr = &derived;
    bptr -> b = 200;

    cout << "BPTR Now Points To Derived Object \n"; 
    bptr -> show();

    DC *dptr;
    dptr = &derived;
    dptr->d = 300;

    cout << "DPTR Is Derived Type Pointer\n";
    dptr -> show();

    cout << "Using ((DC *)bptr)\n";
    ((DC *)bptr) -> d = 400;
    ((DC *)bptr) -> show();

    return 0;
}