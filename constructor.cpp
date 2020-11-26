/*
Description      :  Class With Constructor
Function Date    :  26 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include <iostream>

using namespace std;

class integer
{
    int m, n;
    public:
      integer(int, int); // constructor declaration

      void display(void)
      {
          cout << "m = " << m << "\n";
          cout << "n = " << n << "\n";
      }
};

integer :: integer (int x, int y) // constructor defined
{
    m = x;
    n = y;
}

int main()
{
    integer int1(0, 100); //  constructor call implicitly

    integer int2 = integer(25, 75); // constructor call explicitly

    cout << "\n OBJECT1" << "\n";
    int1.display();

    cout << "\n OBJECT2" << "\n";
    int2.display();

    return 0;
}