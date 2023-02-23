//Idea - Place largest elements at the end at each iteration
#include <bits/stdc++.h>

using namespace std;

void bubbleSort(int *arr, int n){

	for(int times = 1; times<=n-1;times++){
		for(int j=0;j<=n-1-times;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
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
	bubbleSort(arr,n);
	for(auto num:arr){
		cout<<num<<" ";
	}
	cout<<endl;
	return 0;
}