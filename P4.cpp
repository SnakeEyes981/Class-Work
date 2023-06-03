#include<iostream>
using namespace std;
class TollBooth{
	private:
		int cars;
		double totalCash;
	public:
		TollBooth(): cars(0), totalCash(0){
		}
		void payingCar(){
			cars += 1;
			totalCash += 0.5;
		}
		void noPayCar(){
			cars += 1;
		}
		void display(){
			cout<<"Total Cars Passed: "<<cars<<" Cars"<<endl;
			cout<<"Total Cash Collected: "<<totalCash<<" $"<<endl;
		}
};
int main(){
	char flag;
	TollBooth objA = TollBooth();

	cout<<"Press P for Paying Car and N for Non Paying Car & Press E to Exit!"<<endl;
	do{
		cin>>flag;
		if(flag == 'P' || flag == 'p')	objA.payingCar();
		else if(flag == 'N' || flag == 'n')	objA.noPayCar();	
	}while(flag != 'E' && flag != 'e');
	objA.display();
}

