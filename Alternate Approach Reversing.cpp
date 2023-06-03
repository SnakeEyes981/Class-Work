#include<iostream>
using namespace std;

void reverseArray(int *_arr){
	//Copying First Three Elements From [index : 0 to 2] To [index : 3 to 5]
	for(int i=0; i<6; i++){
		*(_arr + (i + 3)) = *(_arr + i);
	}
	//Shifting Last Three Elements From [index : 5 to 3] To [index : 2 to 0]	
	for(int i=0; i<6; i++){
		*(_arr + i) = *(_arr + (5 - i));
	}
}

int main(){
	int arr[6] = {4,6,8,0,0,0};
	cout<<"Values Before Reversing:\n";
	for(int i=0; i<3; i++){
		cout<<i+1<<". "<<*(arr + i)<<endl;
	}
	reverseArray(arr);
	cout<<"Values After Reversing:\n";
	for(int i=0; i<3; i++){
		cout<<i+1<<". "<<*(arr + i)<<endl;
	}
}
