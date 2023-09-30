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
	}catch(int a){
			cout<<"This is a integer "<<a<<endl;
		}
		catch(char s){
			cout<<"This is a String "<<s<<endl;
		}
		catch(float f){
			cout<<"This is a float "<<f<<endl;
		}
	return 0;
}

