/*
Description      :  Create A Class Which Contain Two Dimensional Array Of Size mXn 
                 :  Dynamic Constructor For Allocating Memory & Destructor To Free Memory Of Object
Function Date    :  20 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include<iostream>

using namespace std;

int s = 0;
class matrix
{
  int **p;
  int d1,d2;

  public:
  matrix(int x, int y);
  void get_element(int i, int j, int value)
  {
	p[i][j]=value;

  }

  int & put_element(int i, int j)
  {
	return p[i][j];
  }

  int add(int i, int j)
  {
	s = s + p[i][j];
	return s;
  }

  ~matrix() {cout << "\n Destructor Called.....";}
};

matrix::matrix(int x, int y)
{
  d1=x;
  d2=y;
  p = new int *[d1];        //creates an array pointer
  for(int i = 0; i < d1; i++)
      p[i]=new int[d2];    //creates space for each row
}

int main()
{
  int m, n;
  cout << "Enter Size Of Matrix In Rows And Columns : ";
  cin >> m >> n;
  matrix A(m, n);   // matrix object A constructed

  cout << "Enter Matrix Elements Row By Row \n";
  int i, j, value, sum;

  for(i = 0; i < m; i++)
	 for(j = 0; j < n; j++)
	 {
	    cin >> value;
	    A.get_element(i, j, value);
	 }

  cout << "\n";
   for(i = 0; i < m; i++)
   {
	 for(j = 0; j < n; j++)
	 {

	cout << A.put_element(i, j) <<" ";
	 }
	cout << "\n";
   }
  cout << "\n";
  for(i = 0; i < m; i++)
	 for(j = 0; j < n; j++)
	 {
		sum = A.add(i, j);
	 }
	 cout << sum;
     return 0;

}