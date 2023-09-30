#include<iostream>
using namespace std;

int main()
{
	int a=3;
	int *p=&a;
	
	cout<<*(p)<<endl;
	
	int *ptr=new int(5);
	cout<<*(ptr)<<endl;
	
	int *arr=new int[4];
	for(int i=0;i<4;i++){
		cout<<"Enter value at "<<i+1<<" = ";
		cin>>arr[i];
	}
	for(int i=0;i<4;i++){
		cout<<arr[i]<<endl;
	}
	delete [] arr;
	for(int i=0;i<4;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}

