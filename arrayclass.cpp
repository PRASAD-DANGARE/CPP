/*
Description      :  Array Within A Class , Shopping Portal
Function Date    :  24 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include <iostream>

using namespace std;

const int m = 50; // value for array size

class ITEMS
{
    int itemCode[m];
    float itemPrice[m];
    int count;

    public:
      void CNT(void)
      {
          count = 0;
      }
      void getitem(void);
      void displaysum(void);
      void remove(void);
      void displayitems(void);
};

//=========================================

void ITEMS :: getitem(void)
{
    cout << "\n Enter Item Code : ";
    cin >> itemCode[count];

    cout << "\n Enter Item Price : ";
    cin >> itemPrice[count];
    count++;
}

void ITEMS :: displaysum(void)
{
    float sum = 0;
    for (int i = 0; i < count; i++)
    sum = sum + itemPrice[i];

    cout << "\n Total Value : " << sum << "\n";
}

void ITEMS :: remove(void)
{
    int a;
    cout << "\n Enter Item Code : ";
    cin >> a;
    for (int i = 0; i < count; i++)
    if(itemCode[i] == a)
    itemPrice[i] = 0;
}

void ITEMS :: displayitems(void)
{
    cout << "\n Code Price \n";
    for (int i = 0; i < count; i++)
    {
        cout << "\n " << itemCode[i];
        cout << "   " << itemPrice[i];
    }
    cout << "\n";
}

//==============================================

int main()
{
    ITEMS order;
    order.CNT();
    int x;
    do
    {
        cout << "\n Choose The Following "
             << "\n Enter Appropriate Number \n";
        cout << "\n 1 : Add An Item ";
        cout << "\n 2 : Display Total Value ";
        cout << "\n 3 : Delete An Item ";
        cout << "\n 4 : Display All Items ";
        cout << "\n 5 : Quit ";
        cout << "\n\n Choose The Option : ";

        cin >> x;

        switch (x)
        {
          case 1 : order.getitem();
          break;

          case 2 : order.displaysum();
          break;

          case 3 : order.remove();
          break;

          case 4 : order.displayitems();
          break;

          case 5 : break;
          default : cout << "Error In Input Try Again\n"; 
        }


    } while (x != 5);

    return 0; 
}

