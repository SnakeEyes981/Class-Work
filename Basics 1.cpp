#include<iostream>
using namespace std;

int main(){
	int x,y,z;
	int *a,*b,*c;
	cin>>x>>y>>z;
	
	cout<<&x<<endl;
	cout<<&y<<endl;
	cout<<&z<<endl;
	
	a = &x;
	b = &y;
	c = &z;
	
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
}
