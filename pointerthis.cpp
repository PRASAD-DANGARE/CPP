/*
Description      :  This Pointer
Function Date    :  3 Dec 2020
Function Author  :  Prasad Dangare
Input            :  Char,String
*/

#include <iostream>
#include <cstring>

using namespace std;

class person
{
    char name[20];
    float age;

    public:
        person(char * s, float a)
        {
            strcpy(name, s);
            age = a;
        }
        person greater(person & x)
        
        {
            if(x.age >= age)
                return x;
            else
                return *this;
        }

        void display(void)
        {
            cout << "Name : " << name << "\n"
                 << "Age : " << age << "\n";
        }
};

int main()
{
    person P1("Prasad", 37.50),
           P2("Hritik", 29.0),
           P3("Shiva", 40.25);

    person P = P1.greater(P3);
    cout << "Elder Person Is : \n";
    P.display();

    P = P1.greater(P2);
    cout << "Elder Person Is : \n";
    P.display();

    return 0;
}