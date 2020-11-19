/*
Description      :  Find Maximum Of 2 Different Classes Using Friend Function 
Function Date    :  19 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer,Float
*/


#include<iostream>

using namespace std;

class num1;
class num2
{
  int a;
  
  public:
  void read()
  {
   cout << "Enter A : ";
   cin >> a;
  }

  friend float max (num1, num2);
};

class num1
{
  int b;
  public:
  void readnum()
  {
   cout << "Enter B : ";
   cin >> b;
  }

  friend float max(num1,num2);
};

float max (num1 n1, num2 n2)
{
    if(n1.b > n2.a)
    return n1.b;
  else
    return n2.a;
}

int main()
{
  num1 abc;
  num2 xyz;
  abc.readnum();
  xyz.read();
  cout << " Max Is : " << max (abc, xyz);
  return 0;
}