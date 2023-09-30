#include<iostream>
using namespace std;

class Shop
{
	int itemId[100];
	int itemPrice[100];
	int counter;
	public :
		void initCounter(){
			counter=0;
		}
		void displayPrice();
		void setPrice();
};
void Shop :: setPrice(){
	cout<<"Enter Id of your Item "<<counter+1<<" = ";
	cin>>itemId[counter];
	cout<<"Enter Price of your Item "<<counter+1<<" = ";
	cin>>itemPrice[counter];
	counter++;
}
void Shop :: displayPrice(){
	for(int i=0;i<counter;i++){
		cout<<"The Price of item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
		
	}
}
int main()
{
	Shop dukaan;
	dukaan.initCounter();
	dukaan.setPrice();
	dukaan.setPrice();
	dukaan.setPrice();
	dukaan.displayPrice();
	return 0;
}

