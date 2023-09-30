#include<iostream>
using namespace std;

class complex{
	int a,b;
	public:
		void setNumber(int a1,int b1){
			a=a1;
			b=b1;
		}
		void print(){
			cout<<a<<"i + "<<b<<"i"<<endl;
		}
		friend complex setDataSum(complex c1,complex c2);
};
complex setDataSum(complex c1,complex c2){
	complex c3;
	c3.setNumber((c1.a+c2.a),(c1.b+c2.b));
	return c3;
}
int main(){
	complex c,c1,sum;
	c.setNumber(2,3);
	c.print();
	c1.setNumber(3,4);
	c1.print();
	
	sum=setDataSum(c,c1);
	sum.print();
	return 0;
}
