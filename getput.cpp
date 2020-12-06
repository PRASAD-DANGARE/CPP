/*
Description      :  Character I/O With Get() & Put()
Function Date    :  6 Dec 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    char c;

    cout << "INPUT TEXT \n";
    cin.get();

    while(c != '\n')
    {
        cout.put(c);
        count++;
        cin.get(c);
    }
    cout << "\n Number Of Characters = " << count << "\n";
    return 0;
}