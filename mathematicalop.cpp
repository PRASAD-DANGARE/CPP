/*
Description      :  Mathematical Operations On Strings
Function Date    :  28 Nov 2020
Function Author  :  Prasad Dangare
Input            :  String
*/

#include <iostream>
#include <string.h>

class string
{
    char *p;
    int len;

    public:
      string() 
      {
          len = 0; 
          p = 0;
      }
      string(const char * s);
      string (const string & s);
      ~string()
      {
          delete p;
      }
      friend string operator+(const string &s, const string &t);

      friend int operator<=(const string &s, const string &t);
      friend void show(const string s);
};

string :: string(const char *s)
{
    len = strlen(s);
    p = new char[len + 1];
    strcpy(p, s);
}

string :: string(const string & s)
{
    len = s.len;
    p = new char[len + 1];
    strcpy(p, s.p);
}

string operator+(const string &s, const string &t)
{
    string temp;
    temp.len = s.len + t.len;
    temp.p = new char [temp.len+1];
    strcpy(temp.p, s.p);
    strcat(temp.p, t.p);
    return (temp);
}

int operator<=(const string &s, const string &t)
{
    int m = strlen(s.p);
    int n = strlen(t.p);

    if(m <= n) return (1);
    else return(0);
}

void show (const string s)
{
    cout << s.p;
}

int main()
{
    string s1 = "New";
    string s2 = "York";
    string s3 = "Delhi";
    string t1, t2, t3;

    t1 = s1;
    t2 = s2;
    t3 = s1+s3;

    cout << "\n t1 = "; show(t1);
    cout << "\n t2 = "; show(t2);
    cout << "\n";
    cout << "\n t3 = "; show(t3);
    cout << "\n\n";

    if(t1 <= t3)
    {
        show(t1);
        cout << "Smaller Than ";
        show(t3);
        cout << "\n";
    } 
    else
    {
         show(t3);
         cout << "Smaller Than ";
         show(t1);
         cout << "\n";
    }

    return 0;
}
