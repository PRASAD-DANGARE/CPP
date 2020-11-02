/*

Description      :  Copy Entire File Into Single String Object
Function Date    :  2 Nov 2020
Function Author  :  Prasad Dangare
Input            :  String

*/

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("fillstring.cpp");
    string s, line;
    while (getline(in, line))
        s += line + "\n";
    cout << s;
}