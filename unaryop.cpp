
/*
Description      :  Member Functions To Overload The Operator Unary 
                 :  Pre And Post Increment ‘++’ For An Integer Number.
Function Date    :  21 Nov 2020
Function Author  :  Prasad Dangare
Input            :  Integer
*/
#include<iostream>

using namespace std;


class num
{
	int count;
	public:
	void accept()
	{
		cout << "Enter Value For Oject : ";
		cin >> count;
	}
	void show()
	{
		cout << count << endl;
	}
	void operator ++ ()  //does prefix(++var)
	{
		count++;
	}
	void operator ++(int) //does postfix(var++)
	{
		count++;
	}
};

int main()
{
	num n1,n2;
	n1.accept();
	n2.accept();

	cout << "Before Incrementing.....\n";
	
    n1.show();
	n2.show();
	cout << "\nPost Increment\n";
	n1++;
	
    n1.show();
	cout << "\nPre Increment\n";
	++n2;
	n2.show();
	
    return 0;
}