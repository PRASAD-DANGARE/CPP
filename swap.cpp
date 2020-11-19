/*
Description      : Swap The Value Of 2 Numbers ,
                 : Exchange The Private Values Of Both Classes Using Friend Function
Function Date    :  19 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer,Float
*/

#include<iostream>

using namespace std;

class number2;
class number1
{
  float x;
  public:
  void getdata()
  {
      cin >> x; 
  }

  void display() 
  {
      cout << x << ",";
  }

  friend void swap (number1 &, number2 &);
};

class number2
{
  float y;
  public:
  void getdata() 
  { 
      cin >> y; 
  }
  void display() 
  {
      cout << y;
  }
  friend void swap (number1 &, number2 &);
};

void swap (number1 &t1, number2 &t2)
{
	float temp = t1.x;
	t1.x = t2.y;
	t2.y = temp;
}

int main()
{
  number1 n1;
  number2 n2;
  cout.setf (ios :: right, ios :: adjustfield);
  n1.getdata();
  n2.getdata();
  cout << "\n Values Before Exchange\n  ";
  n1.display();
  n2.display();
  cout.precision(2);
  swap(n1,n2);
  cout << "\n Values After Exchange\n  ";

  cout.fill('*');
  cout.width(10);
  n1.display();

  cout.width(10);
  n2.display();
  return 0;
}