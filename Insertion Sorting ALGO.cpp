#include<iostream>
using namespace std;
int main(){
	
	int unsortedArray[] = {2,0,5,3,1,4};
	int N = sizeof(unsortedArray) / sizeof(unsortedArray[0]);
	int i, j ,key;
	for(i = 1; i < N; i++){
		key = unsortedArray[i];
		j = i - 1;
		while(j >= 0 && unsortedArray[j] > key){
			unsortedArray[j + 1] = unsortedArray[j];
			j = j - 1;
		}
		unsortedArray[j + 1] = key;
	}
	cout << "Sorted unsortedArrayay: ";
	for(int i = 0; i < N; i++){
		cout << unsortedArray[i] << " ";
	}
}

