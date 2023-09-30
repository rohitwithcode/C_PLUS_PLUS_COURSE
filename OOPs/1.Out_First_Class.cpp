#include<iostream>
using namespace std;
class Employee
{
	int a,b,c;	
	public :
		int d,e;
		void setdata(int a,int b,int c);
		void getdata(){
			cout<<"Value of a is "<<a<<endl;
			cout<<"Value of b is "<<b<<endl;
			cout<<"Value of c is "<<c<<endl;
			cout<<"Value of d is "<<d<<endl;
			cout<<"Value of e is "<<e<<endl;
		}
};
void Employee :: setdata(int a1,int b1,int c1){
	a=a1;
	b=b1;
	c=c1;
}
int main()
{
	Employee rohit;
//	rohit.a=45; This will throw error
	rohit.setdata(3,4,5);
	rohit.d=6;
	rohit.e=7;
	rohit.getdata();
	return 0;
}
