#include<iostream>
using namespace std;
class Animal{
	int m,w;
	public :
		void Bark();
		void Walk();
		void setData(int milk,int water);
		void getData()
		{
			cout<<"The milk is given by the Animal = "<<m<<" litres"<<endl;
			cout<<"The water is drink by the Animal = "<<w<<" litres"<<endl;
			
		}
};
void Animal :: Bark(){
	cout<<"Animal is Barking"<<endl;
}
void Animal :: Walk(){
	cout<<"Animal is Walking\n";
}
void Animal :: setData(int milk,int water){
	m=milk;
	w=water;
}
int main()
{
	Animal cow;
	cow.Bark();
	cow.Walk();
	cow.setData(15,30);
	cow.getData();
	return 0;
}
