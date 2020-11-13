/*

Description      :  Arithmatic Operations +, -, *, / Using Inline Function
Function Date    :  13 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Float

*/

#include <iostream>
#include <stdlib.h>

using namespace std;

inline float add(float a, float b)
{

    return a + b;
}
inline float subtract(float a, float b)
{
    return a - b;
}
inline float multiply(float a, float b)
{

    return a * b;
}
inline float divide(float a, float b)
{

    return a / b;
}
int main()
{
    float x, y;

    int ch;

    cout << "Enter Two Numbers : ";
    cin >> x >> y;
    do
    {
        cout << "\n----Arithmatic Op Menu----" << endl
             << "1.Addition" << endl
             << "2.Subtraction" << endl
             << "3.Multiplication" << endl
             << "4.Division" << endl
             << "5.Exit" << endl;

        cout << "\n Enter Your Choice : " << endl;

        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << add(x, y) << endl;
            break;

        case 2:
            cout << subtract(x, y) << endl;
            break;

        case 3:
            cout << multiply(x, y) << endl;
            break;

        case 4:
            cout << divide(x, y) << endl;
            break;

        case 5:
            exit(0);
        }
    } while ((ch >= 1) && (ch <= 5));
    return 0;
}
