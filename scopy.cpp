/*

Description      :  Copies The Contents Of One File Into Another, A Line At A Time
Function Date    :  2 Nov 2020
Function Author  :  Prasad Dangare
Input            :  String

*/

#include <string>
#include <fstream>

using namespace std;

int main()
{

    ifstream in("scopy.cpp");     // open for reading
    ofstream out("newscopy.cpp"); // open for writing
    string s;
    while (getline(in, s)) // discards newline char
        out << s << "\n";  //... Must Add It Back
}