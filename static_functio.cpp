#include<iostream>
using namespace std;

class Temp{
	private:
		static int i;
	public:
		Temp(){
			i++;
		}
		static int return_static(){
			return i;
		}
};

int Temp::i = 0;
int main(){
	Temp t1[100];
	cout<<"Value of i is: "<<t1[1].return_static()<<endl;
	cout<<"Value of i is: "<<Temp::return_static();
	 	
}
