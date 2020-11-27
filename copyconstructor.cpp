/*
Description      :  Copy Constructor
Function Date    :  27 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include <iostream>

using namespace std;

class code
{
    int id;

    public:
      code() { }
      code (int a)
      {
          id = a;
      }
      code(code & x)
      {
          id = x.id;
      }
      void display(void)
      {
          cout << id;
      }
};

int main()
{
    code A(100);
    code B(A);
    code C = A;

    code D;
    D = A;
    
    cout << "\n id of A : "; A.display();
    cout << "\n id of B : "; B.display();
    cout << "\n id of C : "; C.display(); 
    cout << "\n id of D : "; D.display(); 

    return 0;
}