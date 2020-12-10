/*
Description      :  Application Of Template Function
Function Date    :  10 Dec 2020
Function Author  :  Prasad Dangare
Input            :  Integer,Float
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

template <class T>
void roots(T a, T b, T c)
{
    T d = b*b - 4*a*c;
    if(d == 0)
    {
        cout << "R1 = R2 = " << -b/(2*a) << endl;
    }
    else if(d > 0)
    {
        cout << "Roots Are Real \n";
        float R = sqrt(d);
        float R1 = (-b+R)/(2*a);
        float R2 = (-b-R)/(2*a);
        cout << "R1 = " << R1 << " And ";
        cout << "R2 = " << R2 << endl;
    }
    else
    {
        cout << "Roots Are Complex \n";
        float R1 = -b/(2*a);
        float R2 = sqrt(-d)/(2*a);
        cout << "Real Part = " << R1 << endl;
        cout << "Imaginary Part = " << R2;
        cout << endl;
    }
}

int main()
{
    cout << "Integer Coefficients \n";
    roots(1, -5, 6);
    cout << "\n Float Coefficients \n";
    roots(1.5, 3.6, 5.0);

    return 0; 
}