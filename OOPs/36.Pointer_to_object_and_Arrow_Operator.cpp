#include<iostream>
using namespace std;

class Complex{
	int r,i;
	public:
		void getData(){
			cout<<"Real = "<<r<<endl;
			cout<<"Imaginary = "<<i<<endl;
		}
		void setData(int a,int b){
			r=a;
			i=b;
		}
};

int main()
{
//	Complex c;
//	c.setData(4,5);
//	c.getData();
//	
//	Complex *ptr=&c;
//	
//	(*ptr).setData(50,40);
//	(*ptr).getData();
//	
//	ptr->setData(6,7);
//	ptr->getData();

//	Complex *c=new Complex();
//	c->setData(5,6);
//	c->getData();
	
//	Array of objects 

	Complex *p=new Complex[4];
	p->setData(4,5);
	p->getData();
	
	return 0;
}

