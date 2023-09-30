#include<iostream>
using namespace std;

template <class T1=int,class T2=float,class T3=char>
class Coder{
	public:
		T1 a;
		T2 b;
		T3 c;
		Coder(T1 x,T2 y,T3 z){
			a=x;
			b=y;
			c=z;
		}
		void display()
		{
			cout<<"The value of a is "<<a<<endl;
			cout<<"The value of b is "<<b<<endl;
			cout<<"The value of c is "<<c<<endl;
			
		}	
};
int main()
{
//	Default Data Types
	Coder<> h(3,4.5,'R');
	h.display();
	cout<<endl<<endl;
	Coder<float,char,char> h1(3.4,'M','R');
	h1.display();
	return 0;
}

