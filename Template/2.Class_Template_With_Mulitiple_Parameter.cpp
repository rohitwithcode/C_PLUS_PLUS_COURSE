#include<iostream>
using namespace std;

/*

	template <class T1,class T2>
	class class_name{
	// body;
	}

*/
template <class T1,class T2>
class myClass{
	public:
		T1 d;
		T2 d1;
		myClass(T1 a,T2 b){
			d=a;
			d1=b;
		}
		void display(){
			cout<<this->d<<endl<<this->d1;
		}
};

int main()
{
//	myClass<int,char> m(2,'R');
	myClass<int,float> m(2,1.2);
	m.display();
	return 0;
}

