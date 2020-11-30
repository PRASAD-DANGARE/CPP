/*
Description      :  Single Inheritance Private
Function Date    :  30 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include <iostream>

using namespace std;

class B
{
    int a;

    public:
      int b;
      void get_ab();
      int get_a(void);
      void show_a(void);
};

class D : private B
{
    int c;

    public:
      void mul(void);
      void display(void);
};

void B :: get_ab(void)
{
    cout << "Enter Values For a And b : ";
    cin >> a >> b;
} 

int B :: get_a()
{
    return a;
}

void B :: show_a()
{
    cout << "a = " << a << "\n"; 
}

void D :: mul()
{
    get_ab();
    c = b * get_a();
}

void D :: display()
{
    show_a();
    cout << "b = " << b << "\n"
         << "c = " << c << "\n";
}

int main()
{
    D d;
    d.mul();
    d.display();
    d.mul();
    d.display();

    return 0;
}