#include<iostream>
using namespace std;

class Student{
	protected :
		int roll;
		public:
			void setRoll(int n){
				roll=n;
			}
			void printRoll(){
				cout<<"Roll no = "<<roll<<endl;
			}
};

class Exam : virtual public Student{
	protected:
		float m;
		float p;
			public :
				void setMark(float math,float phy){
					m=math;
					p=phy;
				}
				void printMarks(){
					cout<<"Maths Marks ="<<m<<endl;
					cout<<"Phy Marks ="<<p<<endl;
				}
};

class Sports : public virtual Student{
	protected:
		float score;
		public:
			void setScore(float s){
				score=s;
			}
			void printScore(){
				cout<<"Your score is = "<<score<<endl;
			}
};

class Result : public Exam,public Sports{
	float total;
	public:
		
		void display(){
			total=m+p+score;
			printRoll();
			printMarks();
			printScore();
			cout<<"Your total score is ="<<total<<endl;
		}
};
int main()
{
	Result r;
	r.setRoll(4);
	r.setMark(88.0,99.0);
	r.setScore(56.0);
	r.display();
	return 0;
}

