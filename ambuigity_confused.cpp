#include<iostream>
using namespace std;


class A{
	public:
		void show(){
			cout<<"class A";
		}
};
class B{
	public:
		void show(){
			cout<<"class B";
		}
};
class C: public A, public B{
	
};

int main(){
	C temp;
	temp.B::show();
}
