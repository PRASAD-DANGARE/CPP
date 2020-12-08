/*
Description      :  Working With Multiple Files
Function Date    :  8 Dec 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("country");

    fout << "United States Of America \n";
    fout << "United Kingdom \n";
    fout << "South Korea \n";

    fout.close();

    fout.open("capital");

    fout  << "Washington \n";
    fout  << "London \n";
    fout  << "Seoul \n";

    fout.close();

    const int N = 80;
    char line[N];

    ifstream fin;
    
    fin.open("country");

    cout << "Constents Of Country File \n";

    while (fin)
    {
        fin.getline(line, N);
        cout << line;
    }

    fin.close();
    
    fin.open("capital");
    
    cout << "\n Contents Of Capital File \n";

    while (fin)
    {
        fin.getline(line, N);
        cout << line;
    }

    fin.close();

    return 0;
}
