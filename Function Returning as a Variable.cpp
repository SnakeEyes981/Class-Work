#include<iostream>
using namespace std;
//int x;
int& funcReturnVar(int *p){
	*p = 10;
	cout<<"x = "<<*p<<endl;
	return *p;
}
int main(){
	int y;
	funcReturnVar(&y) = 5;
	cout<<"x = "<<y;
}
