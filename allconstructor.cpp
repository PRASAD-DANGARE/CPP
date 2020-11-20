/*
Description      :  create initialize the object using default constructor

                 :  Parameterized Constructor , Parameterized Constructor With Default Argument
                 :  Write Member Function To Display Maximum From Given Two Numbers For All Object

Function Date    :  20 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include <iostream>

using namespace std;

class num
{
  int a, b;
  public:

  num()
  {
    a = 0;
    b = 0;
  }

  num (int x, int y = 4)
  {
    a = x;
    b = y;
  }

  int max()
  {
    return (a > b)? a:b;
  }
};

int main()
{
  int c, d, x, y;

  cout << "Enter Two Integers : ";
  cin >> c >> d;
  num n1(c, d);
  num n2(c);

  cout  << "Parameterized Constructor " << endl;
  x = n1.max();

  cout << "Greater Number Is " << x << endl;
  
  cout << "Constructor With Default Arguments " << endl;
  y = n2.max();
  cout << "Greater Number Is " << y;

  return 0;
}