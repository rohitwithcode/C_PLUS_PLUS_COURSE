#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number = ";
	cin>>n;
	for(int i=2;i<n;i++){
		if(n%2==0){
			cout<<"Not prime number\n";
			exit(0);
		}
		else{
			cout<<"Prime number \n";
			exit(0);
		}
	}
	return 0;
}

