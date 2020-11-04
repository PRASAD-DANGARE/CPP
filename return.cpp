/*

Description      :  Use Of Return Statement In C++
Function Date    :  4 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer

*/

#include <iostream>

using namespace std;

char cfunc(int i)
{
    if (i == 0)
        return 'a';

    if (i == 1)
        return 'b';

    if (i == 5)
        return 'c';

    return 'd';
}

int main()
{
    cout << "Type An Integer : ";

    int val;

    cin >> val;

    cout << cfunc(val) << endl;
}