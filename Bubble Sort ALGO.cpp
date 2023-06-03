#include<iostream>
using namespace std;
int main(){
	
	int unsortedArray[] = {2,0,5,3,1,4,12,65,99,89,76};
	int N = sizeof(unsortedArray) / sizeof(unsortedArray[0]);
	int temp;
	for(int i = 1; i < N; i++){
		for(int j = 0; j < (N - i - 1); j++){
			if(unsortedArray[j] > unsortedArray[j + 1]){
				temp = unsortedArray[j];
				unsortedArray[j] = unsortedArray[j + 1];
				unsortedArray[j + 1] = temp;
			}
			
		}
	}
	cout << "Sorted Array: ";
	for(int i = 0; i < N; i++){
		cout << unsortedArray[i] << " ";
	}
}

