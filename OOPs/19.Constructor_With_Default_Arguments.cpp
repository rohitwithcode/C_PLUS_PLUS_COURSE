#include<iostream>
using namespace std;

class S{
	int data,data1;
	public:
		S(int a,int b=300){
			data=a;
			data1=b;
		}
		void display(){
			cout<<"Data = "<<data<<" Data1 = "<<data1<<endl;
		}
};
int main()
{
//	S s(3,4); // It is gives you data=3 and data1=4
	S s(3);
	s.display();
}
