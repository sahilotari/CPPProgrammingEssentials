#include <iostream>
using namespace std;
bool compare(int a,int b){
	return a>b;
}

void bubbleSort(int arr[],int n){
	//base case
	if(n==1){
		return;
	}
	for(int j=0;j<n-1;j++){
		if(compare(arr[j],arr[j+1])){
			swap(arr[j],arr[j+1]);
		}
	}
	bubbleSort(arr,n-1);
}
void bubbleSort2(int arr[],int n,int j){
	//base case
	if(n==1){
		return;
	}
	if(j==n-1){
		//reduce the problem size and seset j to 0
		bubbleSort2(arr,n-1,0);
		return;
	}
	if(compare(arr[j],arr[j+1])){
		swap(arr[j],arr[j+1]);
	}
	
	bubbleSort2(arr,n,j+1);
}


int main()
{
	int arr[]= {1,3,5,7,6,2,11,21};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort2(arr,n,0);
	for(auto x:arr){
		cout<<x<<" ";
	}
	cout<<endl;
	return 0;
}