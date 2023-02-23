#include <bits/stdc++.h>

using namespace std;
void print(int *arr, int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
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
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}		
	//Sort 
	sort(arr,arr+n);

	//Print
	print(arr,n);
	return 0;
}