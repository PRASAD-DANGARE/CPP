/*
Description      :  Use Of Array Of Objects In Class
Function Date    :  25 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include <iostream>

using namespace std;

class employee
{
    char name[30]; // private data member
    float age;

    public:
      void getdata(void);
      void putdata(void);
};

void employee :: getdata(void)
{
    cout << "Enter Name : ";
    cin >> name;

    cout << "Enter Age : ";
    cin >> age;
}

void employee :: putdata(void)
{
    cout << "Name Is : " << name << "\n";
    cout << "Age Is : " << age << "\n\n";
}

const int size = 3;

int main()
{
    employee developer[size];
    for (int i= 0; i < size; i++)
    {
        cout << "\n Details Of Developer : " << i + 1 << "\n";
        developer[i].getdata();
    }

    cout << "\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Info Of Developer " << i + 1 << "\n";
        developer[i].putdata();
    }

    return 0;
}