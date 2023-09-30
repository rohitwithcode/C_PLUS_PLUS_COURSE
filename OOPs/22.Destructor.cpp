#include<iostream>
using namespace std;
int count=0;
class Number{
	public :
		Number(){
			count++;
			cout<<"Constructor is called for object number "<<count<<endl;
		}
		~Number(){
			cout<<"Destructor is Called for object number "<<count<<endl;
			count--;
		}
};

int main()
{
	cout<<"Entering the main fucntion\n";
	cout<<"Creating Object n1\n";
	Number n1;
	{
		cout<<"Entering the block\n";
		cout<<"Creating two more objects \n";
		Number n2,n3;
		cout<<"Exiting this block\n";
	}
	cout<<"Back to main\n";
	return 0;
}
