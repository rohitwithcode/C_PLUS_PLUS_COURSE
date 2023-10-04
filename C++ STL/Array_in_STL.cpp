#include<iostream>
#include<array>
using namespace std;
/* ********** Array in STL *********** */
int main()
{
//	int array[4]={4,5,6};
	
	array<int,4> a={1,2,3,4};
	
	int size=a.size();
	
	for(int i=0;i<size;i++){
		cout<<a[i]<<endl;
	}
	
	cout<<"Element at 2nd index : "<<a.at(2)<<endl;
	
	cout<<"Empry or not : "<<a.empty()<<endl;
	
	cout<<"The first element in array : "<<a.front()<<endl;
	
	cout<<"The Last element in array : "<<a.back()<<endl;
	return 0;
}

