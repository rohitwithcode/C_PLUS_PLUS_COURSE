#include<iostream>
using namespace std;

class Shop{
	int id;
	float price;
	public:
		void setData(int a,float b){
			id=a;
			price=b;
		}
		void getData(){
			cout<<"Id of this item is = "<<id<<endl;
			cout<<"Price of the object = "<<price<<endl;
		}
};

int main()
{
	cout<<"Enter the arrar size = ";
	int size;
	cin>>size;
	int a;
	float b;
	
	
	Shop *s=new Shop[size];
	Shop *temp=s;
	for(int i=0;i<size;i++){
		cout<<"Enter the ID and Price of item "<<i+1<<" = ";
		cin>>a>>b;
		
		s->setData(a,b);
		s++;	
	}
	for(int i=0;i<size;i++){
		cout<<"Item number :"<<i+1<<endl;
		temp->getData();
		temp++;
	}
	
	return 0;
}

