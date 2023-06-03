#include<iostream>
using namespace std;

class base{
	private:
		int a;
	protected:
		int b;
	public:
		void fun1(){
			
		}
};

class child:private  base{
	
	public:
		void fun(){
			base::fun1();
			base::b = 0;
			//base::a= 0;
		}
		
};

int main(){
	child c1;
	c1.fun1();
	
}

