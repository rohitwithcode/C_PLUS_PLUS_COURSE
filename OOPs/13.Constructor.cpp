#include<iostream>
using namespace std;

class Complex{
	int a,b;
	public :
		Complex(void);
		void print()
		{
			cout<<"The value of a "<<a<<" and "<<b<<endl;
		}
};
Complex :: Complex(void){
	a=40;
	b=43;
}
int main()
{
	Complex c;
	c.print();
	return 0;
}
