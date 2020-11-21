/*
Description      :  Create A Class Matrix Calculate Transpose Of A Matrix 
                 :  Overload  Unary  Minus  ‘–‘  Operator
Function Date    :  21 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include<iostream>

using namespace std;

class matrix
{
  int a[3][3];
  public :
  void get_data();
  void put_data();
  matrix operator-();
};
void matrix :: get_data()
{
  cout << "\n\t Enter the matrix value";
  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
	    cout << "\n\t Enter The Value Of a["<<i<<"]["<<j<<"] :: ";
	    cin >> a[i][j];
	}
  }
}

void matrix ::put_data()
{
  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
	{
	  cout << "\t" << a[i][j];
	}
	  cout << "\n";
  }
}

matrix matrix:: operator -()
{
  matrix m2;
  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
	{
	    m2.a[i][j] = a[j][i];
	}
  }
	return m2;
}

int main()
{
	matrix m1,m2;
	cout << "\n\t Enter Element For m1 ";
	m1.get_data();
	cout << "\n\t Matrix m1 \n";	m1.put_data();
	m2 =- m1;
	cout << "\n\t Transpose :: \n";	m2.put_data();
	return 0;
}