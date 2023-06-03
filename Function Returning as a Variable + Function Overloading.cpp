#include<iostream>
#include<iomanip>
using namespace std;
//int sum(int a, int b){
//	cout<<a+b;
//}
char ULTIMATE;
char& sum(char a, char b, int* c, int* d){
	cout<<setfill('*')<<setw(10)<<" "<<static_cast<char>(a+b)<<" "<<setw(10)<<" "<<endl;
	cout<<setfill('*')<<setw(10)<<" "<<static_cast<char>(*c+*d)<<" "<<setw(10)<<" "<<endl;
	return ULTIMATE;
}
int main(){
	int a = 30, b = 35;
	sum(5.8, 6.9, &a, &b) = 69;
	cout<<setfill('*')<<setw(10)<<" "<<ULTIMATE<<" "<<setw(10)<<" "<<endl;
	
}

