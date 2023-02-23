#include <bits/stdc++.h>

using namespace std;

void printReverse(int *arr, int n){
	for(int i=n-1;i>=0;i--){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	//OR

	for(int i=0;i<n;i++){
		cout<<arr[n-i-1]<<" ";
	}
	cout<<endl;

}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	printReverse(arr,n);
	return 0;
}