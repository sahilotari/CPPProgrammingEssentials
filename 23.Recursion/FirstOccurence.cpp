#include <iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key){
	//base case
	if(n==0){
		return -1;
	}

	//recursive case
	if(arr[0]==key){
		return 0;
	}
	int subInd = firstOccurence(arr+1,n-1,key);
	if(subInd!=-1){
		return subInd+1;
	}
	return -1;
}


int main(int argc, char const *argv[])
{
	int arr[]= {1,3,5,7,6,2,11,21};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key;
	cin>>key;
	cout<<firstOccurence(arr,n,key)<<endl;
	return 0;
}