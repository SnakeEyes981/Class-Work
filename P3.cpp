#include<iostream>
using namespace std;
int globalX;
const int& mediaShow(int& a){
	cout<<a<<endl;
	a *= 2;
	static int x = 0;
	x++;
	cout<<"Function Address: "<<x<<endl;
	return x;
}
int main(){
	int s = 5;
	mediaShow(s);
	cout<<s<<endl;
	mediaShow(s);
	cout<<s<<endl;
//	mediaShow(s) += 10;
	mediaShow(s);
	cout<<"Global Address: "<<globalX<<endl;
	
}

