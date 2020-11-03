/*

Description      :  Creating A Vector That Holds Integers
Function Date    :  3 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer

*/

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    vector<string> v;

    ifstream in("vector.cpp");

    string line;

    while (getline(in, line))
        v.push_back(line); // Add The Line To The End

    for (int i = 0; i < v.size(); i++)
        cout << i << ": " << v[i] << endl;
}