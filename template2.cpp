/*
Description      :  Another Template Class 
Function Date    :  10 Dec 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include <iostream>

using namespace std;

const int size = 3;
template <class T>

class vector
{
    T* v;

    public:
        vector()
        {
            v = new T[size];
            for(int i = 0; i < size; i++)
            v[i] = 0;
        }
        vector(T* a)
        {
            for(int i = 0; i < size; i++)
            v[i] = a[i];
        }
        T operator*(vector &y)
        {
            T sum = 0;
            for(int i = 0; i < size; i++)
            sum += this -> v[i] * y.v[i];

            return sum;
        }
};

int main()
{
    float x[3] = {1.1,2.2,3.3};
    float y[3] = {4.4,5.5,6.6};
    vector <float> v1;
    vector <float> v2;
    v1 = x;
    v2 = y;
    float R = v1 * v2;
    cout << "R = " << R << "\n";

    return 0;
}