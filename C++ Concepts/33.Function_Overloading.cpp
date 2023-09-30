#include<iostream>
using namespace std;
int add(int a,int b){
	return a+b;
}
int add(int a,int b,int c){
	return a+b+c;
}
// Cylinder Volume
int volume(double r,int h)
{
	return (3.14*r*r*h);
}
// Cube Volume
int volume(int a)
{
	return a*a*a;
}
int main()
{
	cout<<"The sum of two numbers is "<<add(4,4)<<endl;
	cout<<"The sum of three numbers is "<<add(4,4,6)<<endl;
	cout<<"The Volume of Cylinder is "<<volume(4,6)<<endl;
	cout<<"The Volume of Cube is "<<volume(4)<<endl;
	return 0;
}
