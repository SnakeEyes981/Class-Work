#include<iostream>
using namespace std;

int *reverseArray(int *_arr){
	int revArray[3];
//	int *arrPtr = _arr;
//	int *revArrayPtr = revArray;
	int k = 2;
	for(int i=0; i<3; i++){
		*(revArray + k) = *(_arr + i);
		k--;
	}
	
//	cout<<"Before Reversing:\n";
//	for(int i = 0; i < 3; i++){
//		cout<<*(_arr + i)<<endl;
//	}
//	
//	cout<<"After Reversing:\n";
//	for(int i = 0; i < 3; i++){
//		cout<<*(revArray + i)<<endl;
//	}
	cout<<*revArray<<endl;
	cout<<*(revArray + 1)<<endl;
	return revArray;
}

int main(){
	int arr[] = {4,6,8};
	int *revPtr = reverseArray(arr);
	
	cout<<"After Reversing:\n";
	cout<<*(revPtr + 2)<<endl;
//	for(int i = 0; i < 3; i++){
//		cout<<*(revPtr + i)<<endl;
//	}
//	for(int i = 0; i < 3; i++){
//		cout<<*(ptrRevArray + i)<<endl;
//	}
}
