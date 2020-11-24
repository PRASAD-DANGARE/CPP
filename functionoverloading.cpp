/*
Description      :  Use Of Function Overloading
Function Date    :  24 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer,Float
*/

#include <iostream>

using namespace std;

//declaration 

int volume(int); // volume if overloaded 
double volume(double, int);
long volume(long, int , int);

int main()
{
    cout << volume (10) << "\n";
    cout << volume (2.5, 8) << "\n";
    cout << volume (100L, 75, 15) << "\n";

    return 0;
}

// function defination

int volume(int s)
{
    return (s*s*s); // cube
}

double volume(double r, int h)
{
    return (3.14519*r*r*h); // cylinder
}

long volume(long l, int b, int h)
{
    return(l*b*h);  // rectangular box
}
