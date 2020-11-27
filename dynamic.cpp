/*
Description      :  Dynamic Initilization Of Constructor
Function Date    :  27 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer,Float
*/

#include <iostream>

using namespace std;

class Fixed_deposit
{
    long int P_amount;
    int Years;
    float Rate;
    float R_value;

    public:
      Fixed_deposit(){ }
      Fixed_deposit(long int p, int y, float r = 0.12);
      Fixed_deposit(long int p, int y, int r);
      void display(void);
};

Fixed_deposit :: Fixed_deposit(long int p, int y, float r)
{
    P_amount = p;
    Years = y;
    Rate = r;
    R_value = P_amount;
    for (int i = 1; i <= y; i++)
    R_value = R_value * (1.0 + r);
}

Fixed_deposit :: Fixed_deposit(long int p, int y, int r)
{
    P_amount = p;
    Years = y;
    Rate = r;
    R_value = P_amount;

    for(int i = 1; i <= y; i++)
    R_value = R_value*(1.0+float(r)/100);
}

void Fixed_deposit :: display(void)
{
    cout << "\n"
         << "Principle Amount = " << P_amount << "\n"
         << "Return Value = " << R_value << "\n";
}

int main()
{
    Fixed_deposit FD1, FD2, FD3;
    long int p;

    int y;
    float r;
    int R;

    cout << "Enter Amount, Period, Interest Rate(in percent)" << "\n";
    cin >> p >> y >> R;
    FD1 = Fixed_deposit(p, y, R);

    cout << "Enter Amount, Period, Interest Rate(decimal form)" << "\n";
    cin >> p >> y >> r;
    FD2 = Fixed_deposit(p, y, r);

    cout << "Enter Amount And Period" << "\n";
    cin >> p >> y;
    FD3 = Fixed_deposit(p, y);

    cout << "\n Deposit 1";
    FD1.display();

    cout << "\n Deposit 2";
    FD2.display();

    cout << "\n Deposit 3";
    FD3.display();

    return 0;
}