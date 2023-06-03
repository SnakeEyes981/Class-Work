#include<iostream>
using namespace std;

class Base{
 private:
 	int a;
 protected:
 	int b;
	 
  public:
  	void fun(){
  		cout<<"I works dude!";
	  }	
};

class Child: private Base{
	
	public:
		void fun1(){
			Base::fun();
			Base::b =0;
		}
	
};


int main(){
	Child temp;
	temp.fun1();
}
