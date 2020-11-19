/*
Description      :  Create Class Sales, Calculate The Commision 
Function Date    :  19 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer,Float
*/


#include<iostream>
#include<stdio.h>

using namespace std;

class sales
{
 char s_name[20];
 char p_name[20];
 int quant;
 int target;
 
 public:

	void accept()
	{
	 cout << "\n_________________________ ";
	 gets(s_name);

	 cout << "\n Enter Salesman's Name : ";
	 gets(s_name);

	 cout << "\n Enter Product Name : ";
	 gets(p_name);

	 cout << "\n Enter Quantity : ";
	 cin >> quant;
	 cout << "\n Enter Target : ";
	 cin >> target;
	}
	void display();
};

void sales :: display()
{
 float com;
 float e_sales;
 com = 0;
 e_sales = 0;

 if(quant > target)
 {
  e_sales = quant - target;
  com = (e_sales*0.25) + (target*0.10);
 }
 else if(quant == target)
 {
  com = (target*0.10);
 }
 else
   com = 0;
 cout << "\n\t Salesman Name : " << s_name;
 cout << "\n\t Product Name : " << p_name;
 cout << "\n\t Quantity : " << quant;
 cout << "\n\t Target : " << target;
 cout << "\n\t Commision : " << com;
 cout<< "\n\t_________________________";
}

int main()
{
 sales s[10];
 int n;
 
 cout << "\n\t Enter Number Of Salesperson : ";
 cin >> n;
 for(int i = 0; i < n; i++)
  s[i].accept();
 cout << "\n\t SALESMAN INFORMATION";
 cout << "\n\t_________________________";
 for(int i = 0; i < n; i++)
  s[i].display();

 return 0;
}