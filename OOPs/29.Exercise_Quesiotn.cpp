#include<iostream>
#include<cmath>
#define PI 3.14159265
using namespace std;

class SimpleCalculater{
	int a,b;
	public :
		int add,mul,div,sub;
		void setNumber(int,int);
		void Operation();
		void display();
};
void SimpleCalculater :: setNumber(int x,int y){
	a=x;
	b=y;
}
void SimpleCalculater :: Operation(){
	 add=a+b;
	 mul=a*b;
	 div=a/b;
	 sub=a-b;
}
void SimpleCalculater :: display(){
	cout<<"Addition of "<<a<<" and "<<b<<" is "<<add<<endl;
	cout<<"Multiply of "<<a<<" and "<<b<<" is "<<mul<<endl;
	cout<<"Devide of "<<a<<" and "<<b<<" is "<<div<<endl;
	cout<<"Subtraction of "<<a<<" and "<<b<<" is "<<sub<<endl;
}
class ScientificCalculater{
	double cosT,sinT,tanT,cotT;
	public:
		double c,s,t,c1;
		void setData(double);
		void Performs();
		void display1();
};
void ScientificCalculater :: setData(double n){
	sinT=n;
	cosT=n;
	tanT=n;
	cotT=n;
}
void ScientificCalculater :: Performs(){
	c=cos(cosT*PI/180.0);
//	c=cos(cotT);
	s=sin(sinT*PI/180.0);
	t=tan(tanT*PI/180.0);
//	t=tan(tanT);
	c1=atan(cotT*PI/180.0);
}
void ScientificCalculater :: display1(){
	cout<<"The value of cos "<<cosT<<" is "<<c<<endl;
	cout<<"The value of sin "<<sinT<<" is "<<s<<endl;
	cout<<"The value of tan "<<tanT<<" is "<<t<<endl;
	cout<<"The value of arc tangent "<<cotT<<" is "<<c1<<endl;
	
}
class HybridCalculator : public SimpleCalculater,public ScientificCalculater{
	string q1,q2;
	public:
		HybridCalculator(){
			cout<<"What type inheritence are you using "<<endl;
			getline(cin,q1);
			cout<<endl<<q1<<endl<<endl;
			cout<<"What visibility mode of inheritence are you using "<<endl;
			getline(cin,q2);
			cout<<endl<<q2<<endl<<endl<<"Ok"<<endl<<endl<<"Your Result is below"<<endl<<endl;
		}
		
};
int main()
{
//	SimpleCalculater s;
//	s.setNumber(30,40);
//	s.Operation();
//	s.display();
//	cout<<endl<<"\n*****************-----------**************"<<endl;
//	ScientificCalculater s1;
//	s1.setData(45.0);
//	s1.Performs();
//	s1.display1();
	
	HybridCalculator h;
	h.setNumber(100,200);
	h.Operation();
	h.display();
	
	h.setData(45.0);
	h.Performs();
	h.display1();
	
	return 0;
}

