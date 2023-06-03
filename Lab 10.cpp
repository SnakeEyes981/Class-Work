#include<iostream>
#include<cstring>
using namespace std;
class Garment{
	char name[20];
	public:
	void getName(){
		cout<<"Please Enter Name: ";	cin>>name;
	}
	virtual int calculatePrice() = 0;
};
class Upper: public Garment{
	int collarSize;
	virtual void getCollarSize() = 0;
};
class Lower: public Garment{
	int waist;
	public:
	virtual void getWaist() = 0;
};
class Shirt: public Upper{
	int calculatePrice(){
		int _price = Upper::collarSize * 20 + 10;
	}
	void getCollarSize(){
		cout << "Enter Collar Size: ";	cin >> Upper.collarSize;
	}
};
class Pajama: public Lower{
	int calculatePrice(){
		int _price = waist * 15 + 50;
	}
	int getWaist(){
		cout << "Enter Waist Size: ";	cin >> Lower.waist;
	}
};
class Trouser: public Lower{
	int calculatePrice(){
		int _price = waist * 20 + 100;
	}
	int getWaist(){
		cout << "Enter Waist Size: ";	cin >> Lower.waist;
	}
};
int main(){
	
}
