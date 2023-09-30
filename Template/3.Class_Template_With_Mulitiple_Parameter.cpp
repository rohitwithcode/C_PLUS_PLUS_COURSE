#include<iostream>
using namespace std;

template <class T1,class T2,class T3>

class Template{
	public:
		T1 a;
		T2 b;
		T3 c;
		void add(T1 a1,T2 b1,T3 c1){
			a=a1;
			b=b1;
			c=c1;
			cout<<a+b+c<<endl;
}
		void mul(T1 a1,T2 b1,T3 c1){
			a=a1;
			b=b1;
			c=c1;
			cout<<a*b*c<<endl;
		} 
		void sub(T1 a1,T2 b1,T3 c1){
			a=a1;
			b=b1;
			c=c1;
			cout<<a-b-c<<endl;
		}
};

int main()
{
	Template<int,float,double> t;
	t.add(12,2.3,34.5678);
	t.mul(2,3,4);
	t.sub(56,34,12);
	return 0;
}

