#include<iostream>
using namespace std;
class complex
{
	int a;
	int b;
	public :
		void setData(int a1,int b1){
			a=a1;
			b=b1;
		}
		void setDataSum(complex c1,complex c2){
			a=c1.a+c2.a;
			b=c1.b+c2.b;
		}
		void print(){
			cout<<a<<"+"<<b<<"i"<<endl;
		}
};
int main()
{
	complex c,c1,c2;
	c.setData(2,3);
	c.print();
	c1.setData(4,5);
	c1.print();
	c2.setDataSum(c,c1);
	c2.print();
	return 0;
}
