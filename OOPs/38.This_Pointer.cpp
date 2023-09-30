#include<iostream>
using namespace std;

class A{
	int a;
	public:
	/*	A & */ void setA(int a){
			this->a=a;
//			return *this;
		}
		void getData(){
			cout<<"Value of a is "<<a<<endl;
		}
};

int main()
{
	A a;
	a.setA(5);//.getData();
	a.getData();
	return 0;
}

