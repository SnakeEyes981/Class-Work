#include<iostream>
using namespace std;
int maxNumber(int a, int b){
	if(a % 2 == 0)	return a;
	else return b;
}
int sumNumber(int p = maxNumber(3,18), int x = 14){
	int sum = maxNumber(p , x) + x;
	return sum;
}
void readValue(int a){
	a = 59;
	cout<<a<<endl;
}
int main(){
	int x = 69;
	cout<<sumNumber();
	readValue(x);
}

