#include<iostream>
using namespace std;

class Temp{
	int a;
	public:
	
	 Temp():a(4){
	 		   cout<<"deafault constuctor called"<<endl;	

	 }	
	 Temp(const Temp& t){
	 	a = t.a;
	   cout<<"copy constuctor called"<<endl;	
	 }
	 void operator=(Temp& t){
	 	a  = t.a;
	 	cout<<"assigment operator overloading called"<<endl;
	 }
	 void test(){
	 	cout<<"test called"<<endl;
	 }
	 
	
};


int main(){
	Temp t1, t2;
	Temp t3(t2);
	t2 = t1;
	t2.test();
}
