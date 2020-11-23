/*
Description      :  Use Of Manipulator 
Function Date    :  23 Nov 2020
Function Author  :  Prasad Dangare
Input            :  String,Integer
*/

#include <iostream>
#include <iomanip> // for setw

using namespace std;

int main()
{
    int Basic = 930, Allowance = 93, Total = 1045;

    cout << setw(10) << "Basic" << setw(10) << Basic << endl
         << setw(10) << "Allowance" << setw(10) << Allowance << endl
         << setw(10) << "Total" << setw(10) << Total << endl;

    return 0;
}
