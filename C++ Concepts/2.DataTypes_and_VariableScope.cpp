#include<iostream>
using namespace std;
int global=7;
void sum(){
	cout<<"The value of the global is outside of the main function= "<<global<<endl;
}
int main()

{
	int global=2;
	int a=3;
	float b=5.4;
	char c='R';
	bool t=true;
	cout<<"The value of the a is = "<<a<<"\n The value of the b is = "<<b;
	cout<<"\nThe value of the c is "<<c<<"\n"<<"The Value of the t is = "<<t;
	cout<<"\n The value of the global is = "<<global<<endl;
	sum();
	return 0;
}

