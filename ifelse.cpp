/*

Description      :  Demonstration Of if And if-else Conditions
Function Date    :  4 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer

*/

#include <iostream>

using namespace std;

int main()
{
    int i;
    cout << "Type A Number And 'Enter' " << endl;
    cin >> i;

    if (i > 5)
        cout << "It's Greater Than 5 " << endl;

    else if (i < 5)
        cout << "It's Less Than 5 " << endl;

    else
        cout << "It's Equal To 5 " << endl;

    cout << "Type A Number And 'Enter' " << endl;

    cin >> i;

    if (i < 10)

        if (i > 5) // If Is Just Another Statement
            cout << "5 < i < 10" << endl;
        else
            cout << "i <= 5" << endl;

    else // Matches "if(i < 10)"
        cout << "i >= 10" << endl;
}