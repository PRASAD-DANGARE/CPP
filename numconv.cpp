/*

Description      :  Converts Decimal To Octal And Hex
Function Date    :  2 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer

*/

#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter A Decimal Number : ";
    cin >> number;
    cout << "Value In Octal = 0"
         << oct << number << endl;

    cout << "Value In Hex = 0x"
         << hex << number << endl;
}