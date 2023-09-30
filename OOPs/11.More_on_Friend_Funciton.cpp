#include<iostream>
using namespace std;
class Y;
class X{
	int data;
	public :
		void setData(int value){
			data=value;
		}
		friend void add(X,Y);
};
class Y{
	int n;
	public:
		void setData(int value){
			n=value;
		}
		friend void add(X,Y);
};
void add(X o1,Y o2){
	cout<<"Summing datas of X and Y objects gives me "<<o1.data+o2.n<<endl;
}
int main()
{
	X x;
	x.setData(5);
	Y y;
	y.setData(6);
	add(x,y);
	return 0;
}
