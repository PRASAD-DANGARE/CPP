/*

Description      :  Relational And Logical Operator In C++
Function Date    :  10 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer

*/

#include <iostream>

using namespace std;

int main()
{
    int i, j;
    cout << "Enter An Integer : ";
    cin >> i;
    cout << "Enter Another Integer : ";
    cin >> j;

    cout << "i > j is " << (i > j) << endl;
    cout << "i < j is " << (i < j) << endl;
    cout << "i >= j is " << (i >= j) << endl;
    cout << "i <= j is " << (i <= j) << endl;
    cout << "i == j is " << (i == j) << endl;
    cout << "i != j is " << (i != j) << endl;
    cout << "i && j is " << (i && j) << endl;
    cout << "i || j is " << (i || j) << endl;
    cout << "(i < 10) && (j < 10) is " << ((i < 10) && (j < 10)) << endl;
}