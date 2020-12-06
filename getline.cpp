/*
Description      :  Reading Strings With getline()
Function Date    :  6 Dec 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include <iostream>

using namespace std;

int main()
{
    int size = 20;
    char city[20];

    cout << "Enter City Name : \n";
    cin >> city;
    cout << "City Name : " << city << "\n\n";

    cout << "Enter City Name Again : \n";
    cin.getline(city, size);
    cout << "City Name Now : " << city << "\n\n";

    cout << "Enter Another City Name : " << "\n";
    cin.getline(city, size);
    cout << "New City Name : " << city << "\n\n";

    return 0;
}