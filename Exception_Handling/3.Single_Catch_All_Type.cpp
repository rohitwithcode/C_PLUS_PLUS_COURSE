#include<iostream>
using namespace std;

int main()
{
	int x;
	cout<<"Enter the number = ";
	cin>>x;
	try{
		if(x==5){
			throw(x);
		}
		if(x==10){
			throw('s');
		}
		if(x=20){
			throw(4.5);
		}
	}
	catch(...){
			cout<<"Some error occur "<<endl;
		}
	return 0;
}

