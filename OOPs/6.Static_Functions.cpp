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
		static void getCount(){
			cout<<"The  value of the count is "<<count<<endl;
		}
};
int Employee :: count;
int main()
{
	Employee e,f,g;
	e.setData();
	e.getData();
	Employee :: getCount();
	
	f.setData();
	f.getData();
//	Employee :: getCount();
	e.getCount();
	g.setData();
	g.getData();
	Employee :: getCount();
	return 0;
}
