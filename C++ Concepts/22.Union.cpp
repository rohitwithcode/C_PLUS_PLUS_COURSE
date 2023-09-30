#include<iostream>
using namespace std;
union money
{
	int rice;
	char car;
	float pounds;	
};
int main()
{
	union money m;
	m.rice=34;
	m.car='c';
	cout<<m.car<<endl;
}
 
