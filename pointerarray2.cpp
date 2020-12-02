/*
Description      :  Array Of Pointers
Function Date    :  2 Dec 2020
Function Author  :  Prasad Dangare
Input            :  Integer,String
*/


#include <iostream>
#include <conio.h>
#include <string.h>
#include <ctype.h>

using namespace std;

int main()
{
    int i = 0;
    char *ptr[10] = {
                    "Books", 
                    "Reading", 
                    "Television", 
                    "Gamming",
                     "Social Media", 
                     "Sports"
                    };
    char str[25];
    cout << "\n\n\n Enter Your Favourite Choice From Array Elements : ";
    cin >> str;
    for(i = 0; i < 4; i++)
    {
        if(!strcmp(str, ptr[i]))
        {
            cout << "\n\n Your Favourite Choice " 
                 << "Is Available Here"
                 << endl;
            break;
        }
    }
    if(i == 4)
    cout << "\n\n Your Favorite " << "Not Available Here " << endl;
    return 0;
}