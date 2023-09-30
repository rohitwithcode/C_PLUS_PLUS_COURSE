#include<iostream>
using namespace std;
int main()
{
	int marks[4]={4,5,6,7};
	cout<<marks[0]<<endl;
	cout<<marks[1]<<endl;
	cout<<marks[2]<<endl;
	cout<<marks[3]<<endl;
	int *ptr=marks;
	cout<<"The value of marks[0] is "<<*ptr<<endl;
	cout<<"The value of marks[1] is "<<*(ptr+1)<<endl;
	cout<<"The value of marks[2] is "<<*(ptr+2)<<endl;
	cout<<"The value of marks[3] is "<<*(ptr+3)<<endl;
	return 0;
}
