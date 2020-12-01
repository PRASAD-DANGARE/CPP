/*
Description      :  Initialization List In Constructor
Function Date    :  1 Dec 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include <iostream>

using namespace std;

class alpha
{
    int x;

    public:
      alpha(int i)
      {
          x = i;
          cout << "\n Alpha Constructed";
      }
      void show_alpha(void)
      {
          cout << "X = " << x << "\n";
      }
};

class beta
{
    float p, q;

    public:
      beta(float a, float b) : p(a), q(b+p)
      {
          cout << "\n Beta Constructed";
      }
      void show_beta(void)
      {
          cout << "P = " << p << "\n";
          cout << "Q = " << q << "\n";
      }
};

class gamma : public beta, public alpha
{
    int u, v;

    public:
      gamma(int a, int b, float c):
      alpha(a*2), beta(c,c), u(a)
      {
          v = b;
          cout << "\n Gamma Constructed";
      }
      void show_gamma(void)
      {
          cout << "U = " << u << "\n";
          cout << "V = " << v << "\n";
      }
};

int main()
{
    gamma g(2, 4, 2.5);
    cout << "\n\n Display Member Values " << "\n\n";

    g.show_alpha();
    g.show_beta();
    g.show_gamma();

    return 0;
};