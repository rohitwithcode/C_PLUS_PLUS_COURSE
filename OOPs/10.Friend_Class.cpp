#include<iostream>
using namespace std;

// Forward declaration 
//class complex;
class complex{
	int a,b;
//	Individualy declaration functions as friends
//	friend int calculator :: sumComplex(complex,complex);
//	friend int calculator :: sumCompComplex(complex,complex);
	
//	Aliter : Declaring the entire class as friend
	friend class calculator;
	public:
		void setNumber(int a1,int b1){
			a=a1;
			b=b1;
		}
		void print(){
			cout<<a<<"i + "<<b<<"i"<<endl;
		}
};
class calculator{
	public :
		int add(int a,int b){
			return a+b;
		}
		int sumComplex(complex,complex);
		int sumCompComplex(complex,complex);
};
int calculator :: sumComplex(complex c1,complex c2){
	{
			return (c1.a+c2.a);
		}
}
calculator :: sumCompComplex(complex c1,complex c2){
	{
			return (c1.b+c2.b);
		}
}
int main()
{
	complex c,c1;
	c.setNumber(3,4);
	c1.setNumber(4,5);
	calculator calc;
	int result=calc.sumComplex(c,c1);
	cout<<"The sum of complex no. = "<<result<<endl;
	int resultC=calc.sumCompComplex(c,c1);
	cout<<"The sum of complex part  = "<<resultC<<endl;
	return 0;
}
