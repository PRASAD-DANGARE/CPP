/*

Description      :  Switch Cases In C++
Function Date    :  4 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer

*/

#include <iostream>

using namespace std;

int main()
{
    bool quit = false; // Flag For Quitting
    while (quit == false)
    {
        cout << "Select A, B, C Or Q To Quit...\n";
        printf("Enter Your Choice : ");
        char response;

        cin >> response;
        switch (response)
        {
        case 'A':
            cout << "You Chose 'A' \n"
                 << endl;
            printf("Select Another Choice?\n");
            break;

        case 'B':
            cout << "You Chose 'B' \n"
                 << endl;
            printf("Select Another Choice?\n");
            break;

        case 'C':
            cout << "You Chose 'C' \n"
                 << endl;
            printf("Select Another Choice?\n");
            break;

        case 'Q':
            cout << "Quitting Menu\n"
                 << endl;
            printf("Thankyou For Using Switch Cases...\n");
            quit = true;
            break;

        default:
            cout << "Please Use A, B, C Or Q!\n"
                 << endl;
            break;
        }
    }
}