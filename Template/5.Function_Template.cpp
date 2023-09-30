#include<iostream>
using namespace std;

//float average(int a,int b){
//	float avg=(a+b)/2.0;
//	return avg;
//}

template <class T,class T1>
float average1(T a,T1 b){
	float avg=(a+b)/2.0;
	return avg;
}
int main()
{
//	float a;
//	a=average(3,4);
//	cout<<a;
	float a;
	a=average1(3,4.3);
	cout<<a;
	return 0;
}

