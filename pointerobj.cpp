/*
Description      :  Pointer To Object
Function Date    :  3 Dec 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include <iostream>

using namespace std;

class item
{
    int code;
    float price;

    public:
        void getdata(int a, float b)
        {
            code = a;
            price = b;
        }
        void show(void)
        {
            cout << "Code : " << code << "\n";
            cout << "Price : " << price << "\n";
        }
};

const int size = 2;

int main()
{
    item *p = new item[size];
    item *d = p;
    int x, i;
    float y;

    for(i = 0; i < size; i++)
    {
        cout << "\n\n\t ---Enter Code And Price For Item" << i+1 << endl;;
        cin >> x >> y;
        p->getdata(x, y);
        p++;
    }

    for(i = 0; i < size; i++)
    {
        cout << "\n Item : " << i + 1 << "\n";
        d -> show();
        d++;
    }

    return 0;
}