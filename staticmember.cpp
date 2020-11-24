/*
Description      :  Static Data Members
Function Date    :  24 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/


#include <iostream>

using namespace std;

class item
{
    static int count;
    int number;

    public:
      void getdata(int a)
      {
          number = a;
          count++;
      }

      void getcount(void)
      {
          cout << "count : ";
          cout << count << "\n";
      }
};

int item :: count;

int main()
{
    item a, b, c; // count is initilized to zero
    a.getcount(); // display count
    b.getcount();
    c.getcount();

    a.getdata(100); // data into object a
    b.getdata(200); // data into object b
    c.getdata(300); // data into object c

    cout << "After Reading Data : " << "\n";

    a.getcount(); // display count
    b.getcount();
    c.getcount();

    return 0;
}