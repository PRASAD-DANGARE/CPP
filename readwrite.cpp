/*
Description      :  Reading & Writing Class Object
Function Date    :  8 Dec 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class INVENTORY
{
    char name[10];
    int code;
    float cost;

    public:
        void readdata(void);
        void writedata(void);
};

void INVENTORY :: readdata(void)
{
    cout << "Enter Name : "; cin >> name;
    cout << "Enter Code : "; cin >> code;
    cout << "Enter Cost : "; cin >> cost;
}

void INVENTORY :: writedata(void)
{
    cout << setiosflags(ios::left)
         << setw(10) << name
         << setiosflags(ios::right)
         << setw(10) << code
         << setprecision(2)
         << setw(10) << cost
         << endl;
}

int main()
{
    INVENTORY item[3];
    fstream file;

    file.open("STOCK.DAT", ios::in | ios::out);

    cout << "ENTER DETAILS FOR THREE ITEMS \n";
    for(int i = 0; i < 3; i++)
    {
        item[i].readdata();

        file.write((char *) & item[i], sizeof(item[i]));
    }

    file.seekg(0);

    cout << "\nOUTPUT\n\n";
    for(int i = 0; i < 3; i++)
    {
        file.read((char *) & item[i], sizeof(item[i]));
        item[i].writedata();
    }
    file.close();
    return 0;
}