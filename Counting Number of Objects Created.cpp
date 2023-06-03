#include<iostream>
using namespace std;

class SmartContract{
	private:
		static int count;
	public:
		SmartContract(){
			count++;
		}
		int showNumberObjects(){
			return count;
		}
};
//class Derived: private SmartContract{
//	public:
//		int showNumberObject(){
//			return SmartContract::showNumberObjects();
//		}
//};
int SmartContract::count = 0;
int main(){
	SmartContract NumberOfContracts[100];
	cout<<NumberOfContracts[0].showNumberObjects()<<endl;
//	Derived d1;
//	cout<<d1.showNumberObject();
}
