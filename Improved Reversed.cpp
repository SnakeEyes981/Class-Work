#include<iostream>
using namespace std;

void reverseArray(int *_arr, const int *_n){
	for(int i=0; i<*_n; i++){
		*(_arr + (i + (*(_n)/2))) = *(_arr + i);
	}	
	for(int i=0; i<*_n; i++){
		*(_arr + i) = *(_arr + ((*(_n)-1) - i));
	}
	
}

int main(){
	int n;
	cout<<"Enter Total Numbers of Elements to Reverse: ";
	cin>>n;
	n = n*2;
	int arr[n] = {0};
	cout<<"Enter "<<(n/2)<<" Number: \n";
	for(int i=0; i<(n/2); i++){
		cout<<i+1<<". ";
		cin>>*(arr + i);
	}
//	cout<<"Values Before Reversing:\n";
//	for(int i=0; i<(n/2); i++){
//		cout<<(i+1)<<". "<<*(arr + i)<<endl;
//	}
	reverseArray(arr, &n);
	cout<<"---------------------------------\n";
	cout<<"Values After Reversing:\n";
	for(int i=0; i<(n/2); i++){
		cout<<i+1<<". "<<*(arr + i)<<endl;
	}
	return 0;
}
