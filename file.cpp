/*
Description      :  Working With Single File
Function Date    :  8 Dec 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outf("ITEM");

    cout << "Enter Item Name : ";
    char name[30];
    cin >> name;

    outf << name << "\n";

    cout << "Enter Item Cost : ";
    float cost;
    cin >> cost;

    outf.close();

    ifstream inf("ITEM");

    inf >> name;
    inf >> cost;

    cout << "\n";
    cout << "Item Name : " << name << "\n";
    cout << "Item Cost : " << cost << "\n";

    inf.close();

    return 0;
}
