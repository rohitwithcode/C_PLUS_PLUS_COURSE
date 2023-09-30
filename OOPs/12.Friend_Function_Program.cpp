#include<iostream>
using namespace std;
class C1;
class C{
	int val;
	friend  void exchenge(C &,C1 &);
	public :
		void intData(int a){
			val=a;
		}
		void display(){
			cout<<val<<endl;
			
		}
};
class C1{
	int v;
	friend  void exchenge(C &,C1 &);
	public :
		void intData(int a){
			v=a;
		}
		void display(){
			cout<<v<<endl;
		}
};
 void exchenge(C &x,C1 &y){
 	int temp=x.val;
 	x.val=y.v;
 	y.v=temp;
 }
int main()
{
	C c;
	C1 c1;
	c.intData(32);
	c1.intData(64);
	exchenge(c,c1);
	cout<<"The value of c after Exchanging becomes : ";
	c.display();
	cout<<"The value of c1 after Exchanging becomes : ";
	c1.display();
	return 0;
}
