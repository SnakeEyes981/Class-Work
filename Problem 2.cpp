#include<iostream>
using namespace std;
class Int{
	private:
		int x;
	public:
		Int(): x(0){
			
		}
		void saveInt(int _integer){
			x = _integer;
		}
		void sumOfIntegars(Int t1, Int t2){
			x = t1.x + t2.x;
		}
		void sumOfIntegars(int t1, int t2){
			x = t1 + t2;
		}
		void display(){
			cout<<x<<endl;
		}
};
int main(){
	Int x1, x2, x3, x4;
	x1.saveInt(52);
	x2.saveInt(10);
	x3.sumOfIntegars(x1, x2);
	x4.sumOfIntegars(5, 9);
	x3.display();
	x4.display();
}

