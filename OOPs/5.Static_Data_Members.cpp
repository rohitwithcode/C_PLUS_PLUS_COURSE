#include<iostream>
using namespace std;
class Employee
{
	int id; 
	static int count;
	public :
		void setData(){
			cout<<"Enter the id = ";
			cin>>id;
			count++;
		}
		void getData(){
			cout<<"The id of this employee is "<<id<<" is this is employee number "<<count<<endl;
		}
};
int Employee :: count; 
int main()
{
	Employee e,f,g;
	e.setData();
	e.getData();
	f.setData();
	f.getData();
	g.setData();
	g.getData();
}
