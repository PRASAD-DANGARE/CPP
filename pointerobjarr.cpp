/*
Description      :  Array Of Pointers To Object
Function Date    :  3 Dec 2020
Function Author  :  Prasad Dangare
Input            :  Integer,String
*/

#include <iostream>
#include <cstring>

using namespace std;

class city
{
    protected:
        char *name;
        int len;

    public:
        city()
        {
            len = 0;
            name = new char[len+1];
        }
        void getname(void)
        {
            char *s;
            s = new char[30];

            cout << "Enter City Name : ";
            cin >> s;
            len = strlen(s);
            name = new char[len+1];
            strcpy(name, s); 
        }
        void printname(void)
        {
            cout << name << "\n";
        }
};

int main()
{
    city *cptr[10];

    int n = 1;
    int option;

    do
    {
        cptr[n] = new city;
        cptr[n] -> getname();
        n++;
        cout << "Do You Want To Enter One More Name?\n";
        cout << "(Enter 1 To Add City, 0 To Display) : ";
        cin >> option;
    } 
    while(option);

    cout << "\n\n";
    for(int i = 1; i <= n; i++)
    {
        cptr[i] -> printname();
    }
    
    return 0;
}

