#include<iostream>
using namespace std;

class Complex{
	int a,b;
	public:
		Complex(){
			a=0;
			b=0;
		}
		Complex(int x,int y){
			a=x;
			b=y;
		}
//		Complex(int x=8,float y=9){ // Constructor Default Parameter
//			a=x;
//			b=y;
//		}
		Complex(int x){
			a=x;
			b=7;
		}
		
		void display(){
			cout<<"A = "<<a<<" and B = "<<b<<endl;
		}
};
int main()
{
	Complex c2;
	c2.display();
	
	Complex c(4,5);
	c.display();
	
	Complex c1(4);
	c1.display();
	
	
	return 0;
}
