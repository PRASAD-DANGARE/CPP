#include <iostream>

using namespace std;

int count = 0;

class alpha
{
    public:
      alpha()
      {
          count++;
          cout << "\n No Of Object Created " << count;
      }
      ~alpha()
      {
          cout << "\n No Of Object Destroyed " << count;
          count--;
      }
};

int main()
{
    cout << "\n\n Enter Main \n";
    alpha A1, A2, A3, A4;
    {
        cout << "\n\n Enter Block1 \n";
        alpha A5; 
    }

    {
        cout << "\n\n Enter Block2 \n";
        alpha A6; 
    }
    cout << "\n\n Re-Enter Main \n";

    return 0;
}