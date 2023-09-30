#include<iostream>
using namespace std;

int main()
{
	cout<<"1.Addition\n";
	cout<<"2.Subtraction\n";
	cout<<"3.Multiplication\n";
	cout<<"4.Devidation\n";
	
	int n;
	cout<<"Enter the number to perform any task = ";
	cin>>n;
	switch(n){
		case 1:
			int a,b;
			cout<<"Enter the number = ";
			cin>>a;
			cout<<"Enter the number = ";
			cin>>b;
			cout<<"Addition of two numbers is ="<<a+b<<endl;
			break;
		case 2:
			int x,y;
			cout<<"Enter the number = ";
			cin>>x;
			cout<<"Enter the number = ";
			cin>>y;
			cout<<"Addition of two numbers is ="<<x-y<<endl;
			break;
		case 3:
			int u,v;
			cout<<"Enter the number = ";
			cin>>u;
			cout<<"Enter the number = ";
			cin>>v;
			cout<<"Addition of two numbers is ="<<u*v<<endl;
			break;
		
		case 4:
			int m,n;
			cout<<"Enter the number = ";
			cin>>m;
			cout<<"Enter the number = ";
			cin>>n;
			cout<<"Addition of two numbers is ="<<m/n<<endl;
			break;
		
		default:
			cout<<"Invalid Value\n";
	}		
	
}
