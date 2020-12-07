/*
Description      :  Precision Setting With precision()
Function Date    :  7 Dec 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Precision Set To 3 Digits \n\n";
    cout.precision(3);

    cout.width(10);
    cout << "VALUE";
    cout.width(15);
    cout << "SORT_OF_VALUE" << "\n";

    for(int n = 1; n <= 5; n++)
    {
        cout.width(8);
        cout << n;
        cout.width(13);
        cout << sqrt(n) << "\n";
    }

    cout << "\n Precision Set To 5 Digits \n\n";
    cout.precision(5);
    cout << "SQRT (10) = " << sqrt(10) << "\n\n";

    cout.precision(0);
    cout << "sqrt (10) = " << sqrt(10) << "(default setting)\n";

    return 0;
}
