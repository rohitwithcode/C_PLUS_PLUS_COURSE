#include<iostream>
#include<cmath>
using namespace std;
class Point1;
class Point{
	double x1,y1;
	public:
	Point(double a,double b){
		x1=a;
		y1=b;
	}
	friend void squareRoot(Point,Point1);
};
class Point1{
	double x2,y2;
	public:
	Point1(double c,double d){
		x2=c;
		y2=d;
	}
	friend void squareRoot(Point,Point1);
};
void squareRoot(Point p,Point1 p1){
	double a= sqrt(pow(p1.x2-p.x1,2) + pow(p1.y2-p.y1,2));
	cout<<"\n\n";
	cout<<"The distance between of two points ("<<p1.x2<<","<<p.x1<<") AND ("<<p1.y2<<","<<p.y1<<") is "<<a<<endl;
}
int main()
{
	double x1, y1, x2, y2, distance; 
 
    cout << "Enter the x coordinates of the first point: "; 
    cin >> x1; 
	
	cout << "Enter the y coordinates of the first point: "; 
    cin >> y1; 
	 
    cout << "Enter the x coordinates of the second point: "; 
    cin >> x2; 
	
	cout << "Enter the y coordinates of the second point: "; 
    cin >> y2; 
	Point p(x1,y1);
	Point1 p1(x2,y2);
	squareRoot(p,p1);
	return 0;
}

