#include<iostream>
#include<string.h>
using namespace std;
class Binary
{
	string s;
	void chk_bin();
	public :
	void read()	;
	void ones_comp();
	void display();
};
void Binary :: read(){
	cout<<"Enter out binary number = ";
	cin>>s;
}
void Binary :: chk_bin(){
	for(int i=0;i<s.length();i++){
		if(s.at(i)!='0' && s.at(i)!='1'){
			cout<<"\nIncorrect Binary Format\n";
			exit(0);
		}
	}
}
void Binary :: ones_comp(){
	chk_bin();
	for(int i=0;i<s.length();i++)
	{
		if(s.at(i)=='0'){
			s.at(i)='1';
		}
		else{
			s.at(i)='0';
		}
	}
}
void Binary :: display(){
	cout<<"\nDisplaying your binary number\n";
	for(int i=0;i<s.length();i++)
	{
		cout<<s.at(i);
	}
}
int main()
{
	Binary  b;
	b.read();
//	b.chk_bin();
	b.display();
	b.ones_comp();
	b.display();
	return 0;
	
}
