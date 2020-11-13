/*

Description      :  Calculate Sum Of 2,3 & Array Element Numbers Using Function Overloading
Function Date    :  13 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer,Float

*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int sum(int, int);

float sum(float, float, float);

int sum(int[], int);

int sum(int a, int b)
{
    return (a + b);
}

float sum(float a, float b, float c)
{
    return (a + b + c);
}

int sum(int a[], int b)
{
    int sum = 0;
    for (int i = 0; i < b; i++)
        sum = sum + a[i];
    return sum;
}
int main()
{
    int ch;
    int a, b, n;
    float x, y, z;
    int p[10];

    do
    {
        cout << "\n 1.Sum Of Two Numbers\n 2.Sum Of Three Float\n 3.Sum Of Array Elements\n 4.Exit\n";
        cout << "\n Enter Your Choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter Two Numbers : ";
            cin >> a >> b;
            cout << "Sum = " << sum(a, b);
            printf("\n");
            break;

        case 2:

            cout << "Enter Three Float Value : ";
            cin >> x >> y >> z;
            cout << "\n Sum = " << sum(x, y, z);
            printf("\n");
            break;

        case 3:
            cout << "Enter Array Elements : ";
            cin >> n;
            cout << "Enter Values : ";
            for (int i = 0; i < n; i++)
                cin >> p[i];
            cout << "\n Sum Of Array Elements " << sum(p, n);
            printf("\n");
            break;

        case 4:
            exit(0);
            printf("\n");
        }

    } while (ch >= 1 && ch <= 4);
    return 0;
}