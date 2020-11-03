/*

Description      :  Break A File Into Separated Words Using Vector 
Function Date    :  3 Nov 2020
Function Author  :  Prasad Dangare
Input            :  String

*/

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    vector<string> words;

    ifstream in("getwords.cpp");

    string word;

    while (in >> word)

        words.push_back(word);

    for (int i = 0; i < words.size(); i++)
        cout << words[i] << endl;
}