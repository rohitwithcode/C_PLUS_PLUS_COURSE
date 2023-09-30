#include<iostream>
using namespace std;
int Money(int recieveMoney,float rate=1.04)// Default Argument will be write after the compulsory arguments
{
	return recieveMoney*rate;
}
int main()
{
	int money=100000;
	cout<<"If you have "<<money<<" Rs in your bank account ,you will recieve ="<<Money(money)<<" Rs after 1 year"<<endl;
	cout<<"If you are a VIP and have "<<money<<" Rs in your bank account ,you will recieve ="<<Money(money,1.1)<<" Rs after 1 year";
	return 0;
}
