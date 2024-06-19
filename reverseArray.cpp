#include <iostream>
using namespace std;

void printArr(int arr[], int size){
	cout<<"Required reversed array is : ";
	for(int i=0;i<size;i++){
		cout<<arr[i] << " ";
	}
	cout<<endl;
}

void swap(int arr[],int size){
	int start = 0;
	int end = size-1;
	while(start < end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}

int main(){
	int odd[] = {12,29, 13, 27 ,41,52,10};
	int even[] = {10,12,22,13,73,41,27,29};
	
	swap(odd,7);
	printArr(odd,7);
	
	cout<<endl;
	swap(even,8);
	printArr(even,8);
}
