/*
Description      :  Reading From Two Files Simultaneously
                 :  Using file2.cpp
Function Date    :  8 Dec 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main()
{
    const int SIZE = 80;
    char line[SIZE];

    ifstream fin1, fin2;
    fin1.open("country");
    fin2.open("capital");

    for(int i = 1; i <= 10; i++)
    {
        if(fin1.eof() != 0)
        {
            cout << "Exit From Country \n";
            exit(1);
    }
      fin1.getline(line, SIZE);
      cout << "Capital Of " << line;

      if(fin2.eof() != 0)
      {
         cout << "Exit From Capital \n";
         exit(1);
      }

      fin2.getline(line, SIZE);
      cout << line << "\n";
        }
    return 0;
}