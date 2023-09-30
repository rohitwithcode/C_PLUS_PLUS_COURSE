#include<iostream>
using namespace std;
int main()
{
 // ************* Reference Variable *******************
 	float x=45;
 	float &y=x;
 	cout<<x<<endl;
 	cout<<y<<endl;
 	// ************* Typecasting *******************
 	int a=64;
 	float b=3.3;
 	cout<<a<<endl;
 	cout<<"The value of a is "<<(float)a<<endl;
 	cout<<"The value of b is "<<(int)b<<endl;
 	int c=int(b);
 	cout<<"The Value of = "<<a+b<<endl;
 	cout<<"The Value of = "<<a+int(b)<<endl;
 	cout<<"The Value of = "<<a+(int)b<<endl;
 	return 0;	
}
