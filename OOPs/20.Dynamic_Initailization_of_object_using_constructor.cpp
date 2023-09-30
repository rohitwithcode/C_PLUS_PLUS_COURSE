#include<iostream>
using namespace std;

class Deposit{
	int principle;
	int years;
	float rate;
	float returnAmount;
	
	public :
		Deposit(){
		}
		Deposit(int p,int y,float r);
		Deposit(int p,int y,int r);
		void show();
};
Deposit :: Deposit(int p,int y,float r){
	principle=p;
	years=y;
	rate=r;
	
	returnAmount=principle;
	for(int i=0;i<y;i++){
		returnAmount =returnAmount * (1+rate);
	}
}
Deposit :: Deposit(int p,int y,int R){
	principle=p;
	years=y;
	rate=float(R)/100;
	
	returnAmount=principle;
	for(int i=0;i<y;i++){
		returnAmount =returnAmount * (1+rate);
	}
}
void Deposit :: show(){
	cout<<endl<<"Principle amount was "<<principle
	<<" Return value after "<<years
	<<" years is "<<returnAmount<<endl;
}
int main()
{
	Deposit d,d1,d2;
	int p,y;
	float r;
	int R;
	
	cout<<"enter the value of p y and r ";
	cin>>p>>y>>r;
	
	d1=Deposit(p,y,r);
	d1.show();
	
	cout<<endl<<endl<<"enter the value of p y and R ";
	cin>>p>>y>>R;
	
	d2=Deposit(p,y,R);
	d2.show();
	return 0;
}
