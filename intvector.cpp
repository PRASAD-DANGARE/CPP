/*

Description      :  Creating A Vector That Holds Integers
Function Date    :  3 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    for (int i = 0; i < 10; i++)
        v.push_back(i);

    for (int i = 0; i < v.size(); i++) // size Returns The Number Of Elements In The Vector
        cout << v[i] << ", ";
    cout << endl;

    for (int i = 0; i < v.size(); i++)
        v[i] = v[i] * 10; // Assignment

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << ", ";
    cout << endl;
}