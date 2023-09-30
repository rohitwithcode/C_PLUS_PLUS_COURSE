#include<iostream>
using namespace std;
int main(){
	cout<<"Logical Operators\n";
	int a=3;
	int b=4;
	cout<<"The value of Logical && Operator "<<((a==b) && (a!=b))<<endl;
	cout<<"The value of Logical || Operator "<<((a!=b) || (a==b))<<endl;
	cout<<"The value of Logical || Opertor"<<((a>=b) || (a>b))<<endl;
	cout<<"The value of Logical ! Operator "<<(!(a==b))<<endl;
	
}
