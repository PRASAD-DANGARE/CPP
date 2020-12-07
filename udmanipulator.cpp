/*
Description      :  User-Defined Manipulator
Function Date    :  7 Dec 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include <iostream>
#include <iomanip>

using namespace std;

ostream & currency(ostream & output)
{
    output << "RS";
    return output;
}

ostream & form(ostream & output)
{
    output.setf(ios::showpos);
    output.setf(ios::showpoint);
    output.fill('*');
    output.precision(2);
    output << setiosflags(ios::fixed)
           << setw(10);
    return output;
}

int main()
{
    cout << currency << form << 7864.5;
    return 0;
}