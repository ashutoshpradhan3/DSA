#include <iostream>
using namespace std;

int binarySearch(int arr[],int size, int key){
	int start = 0;
	int end = size - 1;
	
	int mid = start + (end - start) / 2;
	
	while(start <= end){
		if(arr[mid] == key){
			return mid;
		}
		 if(key > arr[mid]){
			start = mid + 1; 
		}else{
			end = mid - 1;
		}
		
		mid = start + (end - start) / 2;
	}
	return -1;
}


int main(){
	int even[6] = {2,5,6,11,19,7};
	int odd[7] = {21,73,17,22,13,19,11};
	
	int evenIndex = binarySearch(odd,6,6);
	cout<<"Index of 6 is : " << evenIndex<<endl;
	int oddIndex = binarySearch(odd,7,21);
	cout<<"Index of 13 is : " << oddIndex << endl;
	return 0;
}
