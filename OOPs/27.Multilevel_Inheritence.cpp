#include<iostream>
using namespace std;

class Student{
	protected:
		int roll;
			public :
		
		void setRoll(int);
		int getRoll();
};
void  Student :: setRoll(int n){
	roll=n;
}
int Student :: getRoll(){
	return roll;
}
class Exam : public Student{
	protected:
	float m;
	float p;
	public :
		void getM();
		void setMark(float,float);
};
void Exam :: setMark(float maths,float physycs){
	m=maths;
	p=physycs;
}
void Exam :: getM(){
	cout<<"The marks of maths  "<<m<<endl;
	cout<<"The marks of physycs "<<p<<endl;
}
class Result : public Exam{
	float total;
	public:
		void display(){
			
			getM();
			total=(m+p)/2;
			cout<<"Roll no "<<roll<<" Your maths marks "<<m<<" and physycs marks "<<p<<" marks Percentage is = "<<total<<"%"<<endl;
		}
};
int main()
{
	Result e;
	e.setRoll(4);
	e.setMark(43.0,54.0);
	e.display();
	return 0;
}

