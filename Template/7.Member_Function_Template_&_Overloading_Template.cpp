#include<iostream>
using namespace std;

template <class T>

class Code{
	public:
		T d;
		Code(T a){
			d=a;
		}
		void display();
};
template <class T>

void Code<T> :: display(){
			cout<<d<<endl;
		}
	
void Nothing(int a){
	cout<<"Nothing "<<a<<endl;
}
template <class T>
void Nothing(T a){
	cout<<"Nothing Templatised Nothing "<<a<<endl;
}
int main()
{
//	Code<int> c(5);
//	Code<float> c(4.4);
//	cout<<c.d<<endl;
//	c.display();

	Nothing(4.4);
	return 0;
}

