/*

Description      :  Simple Demonstration Of Recursion
Function Date    :  6 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Charactor

*/

#include <iostream>

using namespace std;

void no1(char num)
{
    for (char n = 'A'; n < num; n++)
        cout << " ";

    if (num <= 'Z')
    {
        cout << "num" << num << endl;
        no1(num + 1); // Recursive Call
    }
    else
        cout << "END!!!" << endl;
}

int main()
{
    no1('A');
}