/*
Description      :  Use Of Default Arguments
Function Date    :  23 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Float
*/

#include <iostream>

using namespace std;

int main()
{
    float amount;

    float value(float p, int n, float r = 0.15); // parameterized
    void printline(char ch='*', int len = 40); // prototype

    printline(); // default value for arguments

    amount = value(5000.00, 5); // default for 3 argument

    cout << "\n final value = " << amount << "\n\n";

    printline('='); // default value for 2nd argument

    return 0;

}
/*--------------------------------------------------*/

float value(float p, int n, float r)
{
    int year = 1;
    float sum = p;

    while (year <= n)
    {
        sum = sum*(1 + r);
        year = year + 1;
    }
    return (sum);
}

void printline(char ch, int len)
{
    for (int i = 1; i <=len; i++) printf("%c", ch);
    printf("\n");

}