#include<iostream>
using namespace std;

class Employee{
	int id;
	int salary;
	public :
		void setId(){
			salary=45;
			cout<<"Enter id = ";
			cin>>id;
		}
		void getId()
		{
			cout<<"The id of the employee is = "<<id<<endl;
		}
};
int main()
{
	Employee fb[5];
	for(int i=0;i<5;i++){
		fb[i].setId();
		fb[i].getId();
	}
	return 0;
}
