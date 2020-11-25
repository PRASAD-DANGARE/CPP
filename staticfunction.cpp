/*
Description      :  Static Member Function
Function Date    :  25 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include <iostream>

using namespace std;

class test
{
    int code;

    static int count; // static data member
public:
    void setcode(void)
    {
        code = ++count;
    }
    void showcode(void)
    {
        cout << "Object Number : " << code << "\n";
    }
    static void showcount(void) // static member function
    {
        cout << "Count : " << count << "\n";
    }
};

int test :: count;

int main()
{
    test t1, t2;

    t1.setcode();
    t2.setcode();

    test :: showcount(); // access static function

    test t3;
    t3.setcode();

    test :: showcount();

    t1.showcode();
    t2.showcode();
    t3.showcode();

    return 0;
} 
