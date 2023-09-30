#include<iostream>
using namespace std;

class A{
	public:
		virtual void direct()=0;
		virtual void indirect(){
			direct();
		}
		
};
class  B : public A{
	void direct(){
		cout<<"Direct\n";
	}
	void indirect(){
		cout<<"Indirect\n";
	}
};
int main()
{
	A *a;
	B b;
	a=&b;
	a->indirect();


	B b1;
	A &a1=b1;
	a1.direct();
	return 0;
}

