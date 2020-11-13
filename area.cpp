/*

Description      :  Find Area And Volume Of Cylinder Using Inline Function
Function Date    :  13 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Float

*/

#include <iostream>

using namespace std;

#define PI 3.14

inline float area(float r, float h)
{
    return 2 * PI * r * r + h * (2 * PI * r);
}
inline float volume(float r, float h)
{
    return PI * r * r * h;
}
int main()
{

    float r, h;

    cout << "Enter Two Values For R And H : ";

    cin >> r >> h;

    cout << "Area Of Cylinder Is : " << area(r, h);

    cout << " And Volume Of Cylinder Is : " << volume(r, h);

    return 0;
}
