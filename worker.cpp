/*
Description      :  Create Class Worker With DataMember, Calculate NetSalary
Function Date    :  19 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include<iostream>
#include<string.h>

using namespace std;

class worker
{
	char  wor_name[20];
	int  no_of_hrs;
	float pay_rate;

		public:
		void accept();
		void display(float pay_rate=100);
};

void worker :: accept()
{       
    cout << "\n Enter Worker Name : ";
	cin >> wor_name;
	cout << "\n Enter Number Of Hours Worked : ";
	cin >> no_of_hrs;
    printf("\n");

}
  void worker :: display(float pay_rate)
  {
	cout << "Details Of : " << endl;
	cout << "Worker Name : " << wor_name << endl;
	cout << "Number Of Hours Worked : " << no_of_hrs << endl;
	cout << "Net Salary : " << no_of_hrs*pay_rate;
  }

int main()
{

   worker work;
   work.accept();
   work.display();
   return 0;
}