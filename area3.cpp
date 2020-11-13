/*

Description      :  Calculate Area Of Sphere,Cone,Circle Using Function Overloading
Function Date    :  13 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Float

*/

#include <iostream>
#include <stdlib.h>

using namespace std;

#define PI 3.14

void area(float, float);
void area(double);
void area(float);

int main()
{
    int ch;
    float r, l;
    double r1;

    do
    {
        cout << "\n\t\tFunction Overloading";
        cout << "\n 1.Area of Cone\n 2.Area of sphere\n 3.Area of circle\n 4.Exit\n\n";
        cout << "Enter Your Choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:

            cout << "Enter Radius And Length Of The Cone : ";
            cin >> r >> l;
            area(r, l);
            break;

        case 2:
            cout << "Enter Radius Of Sphere : ";
            cin >> r1;
            area(r1);
            break;

        case 3:
            cout << "Enter Radius Of Circle : ";
            cin >> r;
            area(r);
            break;

        case 4:
            exit(0);
        }
    } while (ch >= 1 && ch <= 4);
    return 0;
}

void area(float r, float l)
{
    cout << "Area Of Cone : " << PI * r * (r + l);
    printf("\n");
}

void area(double r)
{
    cout << "Area Of Sphere : " << 4 * PI * r * r;
    printf("\n");
}

void area(float r)
{
    cout << "Area Of Circle : " << PI * r * r;
    printf("\n");
}