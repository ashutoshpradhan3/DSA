#include <iostream>
using namespace std;

void printArr(int arr[],int num){
	for(int i=0;i<num;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void sortOne(int arr[],int num){
	int start = 0;
	int end = num-1;
	while(start < end){
		if(arr[start] == 0){
			start++;
		}
		
		if(arr[end] == 1){
			end--;
		}
		
		if((arr[start] == 1) && arr[end] == 0 ){
			swap(arr[start], arr[end]);
		}
	}
}

int main(){
	int arr[] = {1,0,0,1,1,1,0,0,1,0};
	
	sortOne(arr,10);
	cout<<endl;
	printArr(arr,10);
}
