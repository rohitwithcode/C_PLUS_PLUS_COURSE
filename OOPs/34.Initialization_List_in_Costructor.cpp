#include<iostream>
using namespace std;

class List{
	int a,b;
	public:
//		List(int m,int n) : a(m),b(n)
//		List(int m,int n,int o) : a(m),b(m+n+o)
//		List(int m,int n) : a(m),b(a+n)
		List(int m,int n) : b(n),a(m+b){  // --> This will throw error because the a is initialize first
			cout<<"The Value of a "<<a<<endl;
			cout<<"The Value of b "<<b<<endl;
		}
};

int main()
{
//	List l(4,5);
//	List l1(4,5,6);
	List l2(5,6);
	return 0;
}

