/*
Description      :  Data Conversion
Function Date    :  30 Nov 2020
Function Author  :  Prasad Dangare
Input            :  String
*/

#include <iostream>

using namespace std;

class invent1
{ 
    int code;
    int items;
    float price;

    public:
      invent1(int a, int b, float c)
      {
          code = a;
          items = b;
          price = c;
      }
      void putdata()
      {
          cout << "Code : " << code << "\n";
          cout << "Items : " << items << "\n";
          cout << "Value : " << price << "\n";
      }
      int getcode()
      {
          return code;
      }
      int getitems()
      {
          return items;
      }
      float getprice()
      {
          return price;
      }
      operator float() {return(items * price);}
};

class invent2
{
    int code;
    float value;

    public:
      invent2()
      {
          code = 0; 
          value = 0;
      }
      invent2(int x, float y)
      {
          code = x;
          value = y;
      }
      void putdata()
      {
          cout << "Code : " << code << "\n";
          cout << "Value : " << value << "\n\n";
      }
      invent2(invent1 p)
      {
          code = p.getcode();
          value = p.getitems() * p.getprice();
      }
};

int main()
{
    invent1 s1(100, 5, 140.0);
    invent2 d1;
    float total_value;

    total_value = s1;
    d1 = s1;

    cout << "Product Details - Invent Type" << "\n";
    s1.putdata();

    cout << "\n Stock Value" << "\n";
    cout << "Value = " << total_value << "\n\n";

    cout << "Product Details - Invent2 Type" << "\n";
    d1.putdata();

    return 0;
}