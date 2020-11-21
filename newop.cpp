/*
Description      :  Class String With Character Pointer Using New & Delete,
                 :  Overload The Following Operators As Upper Case To Lower Case
Function Date    :  21 Nov 2020
Function Author  :  Prasad Dangare
Input            :  String
*/

#include<iostream>
#include<string.h>
#include<ctype.h>

using namespace std;

class String
{
  char *str;
  int length;
  public:
  String(char s[])
  {

	  length = strlen(s);
	  str = new char(length);
	  strcpy(str,s);
  }

  void display()
  { 
    cout << "The String Is : " << str;
  }
  ~String() 
  {
    delete str;
  }
void operator !();
char operator [] (int i)
{
  return str[i];
}

};


void String :: operator !()
{

  for(int i = 0; str[i] != 0; i++)
  {
  if(str[i] >= 65 && str[i] <= 90)
	 str[i] = tolower(str[i]);

  else
	str[i] = toupper(str[i]);
  }
  cout << str;

}
int main()
{
  String s1("aBcD");
  int i;
  s1.display();
  cout<<"\nEnter index ";
  cin>>i;
  cout<<"the character is "<<s1[i]<<endl;
  cout<<"after changing case ";
  !s1;
  return 0;
}
