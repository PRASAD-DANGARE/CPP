/*

Description      :  Menu Driven Program
Function Date    :  4 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer

*/

#include <iostream>

using namespace std;

int main()
{
    char c; //Hold Response

    while (true)
    {
        cout << "MAIN MENU : " << endl;
        cout << " 1: Left,\n 2: Right,\n 3: Quit...\n";
        printf("Enter Your Choice : ");
        cin >> c;

        if (c == '3')
            break; // Out Of "while(1)"

        if (c == '1')
        {
            cout << "LEFT MENU : " << endl;
            cout << "Select A Or B : ";
            cin >> c;

            if (c == 'A')
            {
                cout << "You Chose 'A'\n " << endl;
                continue; // Back To Main Menu
            }

            if (c == 'B')
            {
                cout << "You Chose 'B'\n " << endl;
                continue;
            }

            else
            {
                cout << "You Didn't Chose A Or B!\n " << endl;
                continue;
            }
        }

        if (c == '2')
        {
            cout << "RIGHT MENU : " << endl;
            cout << "Select C Or D : ";
            cin >> c;

            if (c == 'C')
            {
                cout << "You Chose 'C'\n " << endl;
                continue;
            }

            if (c == 'D')
            {
                cout << "You Chose 'D'\n " << endl;
                continue;
            }

            else
            {
                cout << "You Didn't Chose C Or D!\n " << endl;
                continue;
            }
        }

        cout << "You Must Type 1 Or 2 Or 3!\n " << endl;
    }

    cout << "Quitting Menu..." << endl;
}