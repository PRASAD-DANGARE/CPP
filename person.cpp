/*
Description      :  Create Class Person With Contain Some DataMembers
Function Date    :  19 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class person
{
  char name[20];
  char city[15];
  long mobno;
  
  public:
  
  void getdata()
  { 
    cout << "\n Enter Person Name : ";
    cin >> name;
    cout << "\n Enter City : ";
    cin >> city;
    cout << "\n Enter Mobile No : ";
    cin >> mobno;
  }

  void display()
  {
    cout << "\n Person Name " << name;
    cout << "\n City " << city;
    cout << "\n Mobile Number " << mobno;
    printf("\n");
  }
  void search(char n[])
  {
    if (strcmp (name, n)==0)
    {
      cout << "\n Person Name " << name;
      cout << "\n Person Mobile Number " << mobno;
      cout << "\n Person City " << city;
      printf("\n");
    }
  }
  void search(long mobileno)
  {
     if(mobno == mobileno)
     {
	   cout << "\n Person Name " << name;
	   cout << "\n Person City " << city;
	   cout << "\n Person Mobile Number " << mobno;
       printf("\n");
     }
  }
};

int main()
{

  int n;
  long mbno;
  char nam[20];
  int ch;
  person *p;

  cout << "\n\n Enter How Many Records To Be Entered : ";
  cin >> n;
  p = new person[n];

  while(1)
  {
    cout << "\n 1.Enter Records\n 2.Display\n 3.Search Mobile No\n 4.Search Name By Mobno\n 5.Exit \n";
    cout << "\n Enter Your Choice : ";
    cin >> ch;
    switch(ch)
    {
       case 1:
	   for(int i = 0; i < n; i++)
	   {
	      p[i].getdata();
	   }
	   break;

       case 2:
	   for(int i = 0; i < n; i++)
	   {
	      p[i].display();
	   }
	   break;

       case 3:
	      cout << "\n Enter Person Name To Find Mobno : ";
	      cin >> nam;
	    for(int i = 0; i < n; i++)
	    {
	       p[i].search(nam);
	    }
	    break;

       case 4:
	      cout << "\n Enter Mob No Of Person To Be Searched : ";
	      cin >> mbno;
	      for(int i = 0; i < n; i++)
	      {
	         p[i].search(mbno);
	      }
	   break;

       case 5:
	      exit (0);
    }
  }

   return 0;

}

