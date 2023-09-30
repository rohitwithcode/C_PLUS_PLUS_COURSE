#include<iostream>
using namespace std;
int main()
{
	int marks[4]={4,5,6,7};
	cout<<marks[0]<<endl;
	cout<<marks[1]<<endl;
	cout<<marks[2]<<endl;
	cout<<marks[3]<<endl;
	
	cout<<"Another Array\n";
	
	int Array[4];
	for(int i=0;i<4;i++){
		cout<"Enter Number = ";
		cin>>Array[i];
	}
	for(int i=0;i<4;i++){
		cout<<Array[i]<<" ";
	}
	return 0;
}

