//Idea - place small elements in begining of the array
#include <bits/stdc++.h>

using namespace std;

void selectionSort(int *arr, int n){
	for(int pos = 0; pos<=n-2; pos++){
		int cur = arr[pos];
		int min_pos = pos;
		//find pos of min element
		for(int j=pos; j<n;j++){
			if(arr[j]<arr[min_pos]){
				min_pos = j;
			}
		}
		//swap elements
		swap(arr[pos], arr[min_pos]);
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
	selectionSort(arr,n);
	for(auto num:arr){
		cout<<num<<" ";
	}
	cout<<endl;
	return 0;
}