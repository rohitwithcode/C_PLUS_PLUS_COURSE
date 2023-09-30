#include<iostream>
using namespace std;
struct employee
{
	int eId;
	char fav;
	float salary;	
};
int main()
{
	struct employee Rohit;
	Rohit.eId=1;
	Rohit.fav='R';
	Rohit.salary=3343;
	cout<<Rohit.eId<<endl;
	cout<<Rohit.fav<<endl;
	cout<<Rohit.salary<<endl;
}
