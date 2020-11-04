/*

Description      :  Use Of While-Loop In C++
Function Date    :  4 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer

*/

#include <iostream>

using namespace std;

int main()
{
    int loop = 5;
    int wloop = 0;

    while (wloop != loop)
    {
        cout << "Enter The Number 5 Times : ";
        cin >> wloop;
    }

    cout << "End Of While Loop..." << endl;
}