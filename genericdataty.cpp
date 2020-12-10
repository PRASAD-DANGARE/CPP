/*
Description      :  Two Generic Data Types In A Class Definition
Function Date    :  10 Dec 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include <iostream>

using namespace std;

template <class T1, class T2>

class Test
{
    T1 a;
    T2 b;

    public:
        Test(T1 x, T2 y)
        {
            a = x;
            b = y;
        }
        void show()
        {
            cout << a << " And " << b << "\n";
        }
};

int main()
{
    Test <float, int> test1 (1.23, 123);
    Test <int, char> test2 (100, 'W');

    test1.show();
    test2.show();

    return 0;
};

