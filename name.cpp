/*
Description      :  Enter Name And Age 
Function Date    :  23 Nov 2020
Function Author  :  Prasad Dangare
Input            :  String,Integer
*/

#include <iostream>

using namespace std;

class person
{
    char name[30];
    int age;

    public:
      void getdata(void);
      void display(void);
};

void person :: getdata(void)
{
    cout << "\n Enter Name : ";
    cin >> name;
    cout << "Enter Age : ";
    cin >> age;
}

void person :: display(void)
{
    cout << "\n Name Is : " << name;
    cout << "\n Age Was : " << age; 
}

int main()
{
    person p;

    p.getdata();
    p.display();

    return 0;
}