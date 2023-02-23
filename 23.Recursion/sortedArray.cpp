#include <iostream>
using namespace std;

bool isSorted(int arr[],int n){
	// base case
	if(n<=1){
		return true;
	}
	//recursive case
	return (arr[0]<arr[1] and isSorted(arr+1,n-1));

}


int main(int argc, char const *argv[])
{
	int arr[] = {1,2,3,4,50,6,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<isSorted(arr,n)<<endl;
	return 0;
}