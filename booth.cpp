/*
Description      :  Ticket Selling Booth 
Function Date    :  21 Nov 2020
Function Author  :  Prasad Dangare
Input            :  String,Integer
*/


#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;
class ticketbooth
{
  unsigned int no_people;
  double totcash;
  public:
  ticketbooth()
  {
	no_people = 0;
	totcash = 0.0;
  }
  void ticket()
  {
	no_people++;
	totcash += 5;
  }
  void visited()
  {
	no_people++;
  }

  void display()
  {
	cout << "Total Number Of People " << no_people << endl
	<<"Total Amount " << totcash << endl;
  }
};
int main()
{
  ticketbooth booth1;
  int ch;
   cout << "\n Press 1 For Visited " << endl
	  << "\n Press 2 For Visited And Bought Ticket " << endl;
  do
  {

	cout << "\n 1.Visited " << "\n";
	cout << "2.Visited And Bought Ticket " << "\n";
	cout << "3.Display" << "\n";
	cout << "4.Exit" << "\n";
	cin >> ch;
	
    switch(ch)
	{

	   case 1:booth1.visited();
	      break;

	   case 2:booth1.ticket();
	      break;

	   case 3:booth1.display();
	      break;

       case 4:exit(0);
    }
   }while(ch<=4);
   return 0;
}