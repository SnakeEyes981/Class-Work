#include<iostream>
using namespace std;
void swapVar(int *ptr1, int *ptr2){
	int temp=0;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main(){
	int a = 5;
	int b = 10;
	int *aptr = &a;
	int *bptr = &b;
	cout<<"Before Swapping:\nA = "<<a<<"\nB = "<<b<<endl;
	swapVar(aptr,bptr);
	cout<<"After Swapping:\nA = "<<a<<"\nB = "<<b<<endl;
}
