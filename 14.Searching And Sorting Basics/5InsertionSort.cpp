//Idea - Insrt element at right index in sorted part
#include <bits/stdc++.h>
using namespace std;
void insertionSort(int *arr, int n){
	for(int i=1;i<=n-1; i++){
		int cur = arr[i];
		int prev = i-1;
		while(prev >= 0 && arr[prev]>cur){
			arr[prev+1] = arr[prev];
			prev = prev - 1;
		}
		arr[prev+1] = cur;
	}
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
	insertionSort(arr,n);
	for(auto num:arr){
		cout<<num<<" ";
	}
	cout<<endl;
	return 0;
}