/*
Description      :  Accessing String Using Pointer And Array
Function Date    :  3 Dec 2020
Function Author  :  Prasad Dangare
Input            :  Integer,String
*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char str[] = "Test";
    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
        cout << str[i] << i[str] << *(str+i) << *(i+str);
    }
    cout << endl;
    int lenM = len / 2;
    len--;
    for(int i = 0; i < lenM; i++)
    {
       str[i] = str[i] + str[len-i];
       str[len-i] = str[i] - str[len-i];
       str[i] = str[i] - str[len-i]; 
    }
    cout << "The String Reversed : " << str;

    return 0;
}