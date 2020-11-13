/*

Description      :  Find Length & Width Of Rectangle Using Inline Function
Function Date    :  13 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Float

*/

#include <iostream>

using namespace std;

inline float area(float r, float l)
{
    return (r + l);
}

inline float perimeter(float r, float l)
{
    return 2 * (r + l);
}

int main()
{
    float r, l;

    cout << "Enter Length And Width : ";

    cin >> r >> l;

    cout << "Area Of Rectangle : " << area(r, l) << endl;

    cout << "Perimeter Of Rectangle : " << perimeter(r, l);
}