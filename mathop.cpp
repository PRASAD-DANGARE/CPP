/*

Description      :  Mathematical Operations In C++
Function Date    :  10 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer,Float

*/

#include <iostream>

using namespace std;

// A Macro To Display A String And A Value

#define PRINT(STR, VAR) \ 
  cout << STR " = " \
       << VAR << endl;

int main()
{
    int i, j, k;
    float u, v, w;
    cout << "Enter An Integer";
    cin >> j;
    cout << "Enter Another Integer : ";
    cin >> k;
    PRINT("j", j);
    PRINT("k", k);
    i = j + k;
    PRINT("j + k", i);
    i = j - k;
    PRINT("j - k", i);
    i = j / k;
    PRINT("j / k", i);
    i = j * k;
    PRINT("j * k", i);
    i = j % k;
    PRINT("j % k", i);

    // Following Only Works With Integers:

    j %= k;
    PRINT("j %= k", j);
    cout << "Enter A Floating-Point Number : ";
    cin >> v;
    cout << "Enter Another Floating-Point Number";
    cin >> w;
    PRINT("v", v);
    PRINT("w", w);
    u = v + w;
    PRINT("v + w", u);
    u = v - w;
    PRINT("v - w", u);
    u = v * w;
    PRINT("v * w", u);
    u = v / w;
    PRINT("v / w", u);

    // Following Works For ints, chars, and doubles too:

    PRINT("u", u);
    PRINT("v", v);
    u += v;
    PRINT("u += v", u);
    u -= v;
    PRINT("u -= v", u);
    u *= v;
    PRINT("u *= v", u);
    u /= v;
    PRINT("u /= v", u);
}