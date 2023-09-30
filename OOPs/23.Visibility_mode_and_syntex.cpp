#include<iostream>
using namespace std;

class Employee{
	public :
		int id;
		int salary;
		Employee(int n){
			id=n;
			salary=45;
		}
		Employee(){
		}
		
};

class Programmer : public Employee{
	public :
		Programmer(int i){
			id=i;
			salary=565.4;
		}
		string name="Rohit";
		void Print()		{
			cout<<id<<endl;
		}
};

int main()
{
	Employee r(2);
	cout<<r.id<<endl;
	cout<<r.salary<<endl;
	
	Programmer p(8);
	cout<<p.name<<endl;
	cout<<p.id<<endl;
	p.Print();
	cout<<p.salary<<endl;
	return 0;
}
