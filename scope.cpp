/*

Description      :  How Variables Are Scoped In C++
Function Date    :  9 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer

*/

#include <iostream>

using namespace std;

int main()
{
    int scp1;
    {
        // scp1 still visible here

        int scp2;

        // scp2 visible here
        {
            // scp1 & scp2 still visible here

            int scp3;

            // scp1 , scp2 and scp3 visible here
        } // scp3 close here

        // scp1 and scp2 visible here
    } // scp2 close here

} // scp1 close here