/*
Description      :  Pointers With Arrays
Function Date    :  2 Dec 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include <iostream>

using namespace std;

int main()
{
    int numbers[50], *ptr;
    int n, i;
    cout << "\n Enter The Count \n";
    cin >> n;

    cout << "\n Enter The Numbers One By One \n";
    for(i = 0; i < n; i++)
    cin >> numbers[i];
    ptr = numbers;
    int sum = 0;

    for(i = 0; i < n; i++)
    {
        if(*ptr%2==0)
        sum = sum + *ptr;
        ptr++;
    }
    cout << "\n\n Sum Of Even Numbers : " << sum;
}

