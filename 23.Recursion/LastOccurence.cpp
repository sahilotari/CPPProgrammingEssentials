#include <iostream>
using namespace std;

int lastOccurence(int arr[],int n,int key){
	// base case
	if(n==0){
		return -1;
	}
	//rec case
	int subInd = lastOccurence(arr+1,n-1,key);
	if(subInd==-1){
		if(arr[0]==key){
			return 0;
		}else{
			return -1;
		}
	}else{
		return subInd+1;
	}
}



int main(int argc, char const *argv[])
{
	int arr[]= {1,3,2,7,6,2,11,2,21};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key;
	cin>>key;
	cout<<lastOccurence(arr,n,key)<<endl;
	return 0;
}