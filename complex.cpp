/*
Description      :  Class ComplexNumber Contain Member As Real,Imaginary
                 :  Calculate Sum Of 2 ComplexNumber Using Friend Function
Function Date    :  20 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/

#include<iostream>

using namespace std;

class complex
{
   private:
	float x;  //real part
	float y; //imaginary part

   public:
	complex() { }
	complex(float,float);
	friend complex operator + (complex, complex);
	void display(void);
};

complex :: complex(float real, float imag)
{
   x = real;
   y = imag;
}

void complex :: display(void)
{
   cout << x << "+" << y << "i\n";
}

complex operator + (complex c, complex d)
{
   complex temp;
   temp.x = c.x+d.x;
   temp.y = c.y+d.y;
   return(temp);
}

int main()
{
  complex c1, c2, c3;
  c1 = complex(3.5, 2.5);
  c2 = complex(1.1, 1.7);
  c3 = c1 + c2;
  cout << "c1=";
  c1.display();

  cout << "c2=";
  c2.display();

  cout << "c3=";
  c3.display();

  return 0;

}