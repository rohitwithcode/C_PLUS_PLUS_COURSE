#include<iostream>
using namespace std;

template <class T>

class Vector{
	
	public:
		T *arr;
		int size;
		Vector(int m){
			size=m;
			arr=new T[size];
		}
		T sum(Vector &v){
			T d=0;
			for(int i=0;i<size;i++){
				d += this->arr[i] * v.arr[i];
			}
			return d;
		}
};

int main()
{
	Vector <float>v(3); 
	v.arr[0]=3.3;
	v.arr[1]=4.4;
	v.arr[2]=5.5;
	
	Vector <float>v1(3); 
	v1.arr[0]=6.2;
	v1.arr[1]=7.1;
	v1.arr[2]=8.9;
	float a=v.sum(v1);
	cout<<a<<endl;
	return 0;
}

