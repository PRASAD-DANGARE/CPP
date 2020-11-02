/*

Description      :  Creating String Class
Function Date    :  2 Nov 2020
Function Author  :  Prasad Dangare
Input            :  String

*/

#include <string>
#include <iostream>

using namespace std;

int main()
{
    string s1, s2;            // empty string
    string s3 = "Hello I'm "; // Initialized
    string s4("Prasad ");
    s2 = "Dangare"; // Assigning To A String

    s1 = s3 + ", " + s4; // Combining Strings
    cout << s1 + s2 + "!" << endl;
}