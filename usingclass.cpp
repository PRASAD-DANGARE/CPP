/*
Description      :  Class Implementation
Function Date    :  24 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer,Float
*/

#include <iostream>

using namespace std;

class item
{
    int number; // private by default
    float cost; // private

    public:
      void getdata(int a, float b); // prototype declaration

    // function defined inside class

    void putdata(void)
    {
        cout << "number : " << number << "\n";
        cout << "cost : " << cost << "\n";
    }
};

//------ member function defination ------------

void item :: getdata(int a, float b) // membership label
{
    number = a; // private variables
    cost = b; // directly used
}

//------- main program -----------------

int main()
{
    item x; // create object x
    cout << "\n object x " << "\n";

    x.getdata(100, 299.95); // call member function
    x.putdata(); // call member fuction

    item y;

    cout << "\n object y" << "\n";

    y.getdata(200, 175.50);
    y.putdata();

    return 0;
}