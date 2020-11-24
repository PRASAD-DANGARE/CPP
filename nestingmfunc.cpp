/*
Description      :  Nesting Of Member Functions
Function Date    :  24 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include <iostream>

using namespace std;

class set
{
    int m, n;

    public:
      void input(void);
      void display(void);
      int largest(void);
};

int set :: largest(void)
{
    if(m >= n)
    return(m);

    else
    return(n);
}

void set :: input(void)
{
    cout << "Input Values Of M And N" << "\n";
    cin >> m >> n;
}

void set :: display(void)
{
    cout << "Largest Value = "
         << largest() << "\n"; // calling member function
}

int main()
{
    set A;
    A.input();
    A.display();

    return 0;
}
