/*
Description      :  Constructor In Derived Class
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
          cout << "Alpha Initilized \n";
      }
      void show_x(void)
      {
          cout << "X = " << x << "\n";
      }
};

class beta
{
    float y;

    public:
      beta(float j)
      {
          y = j;
          cout << "Beta Initilized \n";
      }
      void show_y(void)
      {
          cout <<"Y = " << y << "\n";
      }
};

class gamma : public beta, public alpha
{
    int m, n;

    public:
      gamma(int a, float b, int c, int d):
           alpha(a), beta(b)
      {
          m = c;
          n = d;
          cout << "Gamma Initilized \n";
      }
      void show_mn(void)
      {
          cout << "M = " << m << "\n"
               << "N = " << n << "\n";
      }
};

int main()
{
    gamma g(5, 10.75, 20, 30);
    cout << "\n";
    g.show_x();
    g.show_y();
    g.show_mn();

    return 0;
}