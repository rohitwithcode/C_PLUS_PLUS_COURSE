#include<iostream>
using namespace std;

class Point{
	int a,b;
	public :
		Point(int x,int y){
			a=x;
			b=y;
		}
		void display(){
			cout<<"The X Co - Ordinate = "<<a<<" and Y Co - Ordinate = "<<b<<endl;
		}
};

int main()
{
	Point p(3,4);
	p.display();
	return 0;
}
