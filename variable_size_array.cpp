#include<iostream>
using namespace std;
class temp{
};


int main(){
	temp t1, t2;
	t2 = t1;
	t2(t1);
	int size = 0;
	cout<<"Enter the size of array: ";
	cin>>size;
	
	int arr[10];
	int *arr = new int[10];
	arr[0] = 10;
	cout<<arr[0];
}
