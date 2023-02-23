#include <bits/stdc++.h>

using namespace std;

int binarySearch(int *arr, int n, int key){
	int s = 0, e = n-1;
	int mid;
	while(s<=e){
		mid = s + (e-s)/2;
		if(arr[mid] == key){
			return mid;
		}else if(arr[mid]<key){
			s = mid+1;
		}else{
			e = mid-1;
		}
	}
	return -1;
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
	int key = 5;
	int ind = binarySearch(arr,n,key);
	if(ind != -1){
		cout<<key<<" is present at index "<<ind<<endl;
	}else{
		cout<<key<<" NOT found...\n";
	}

	return 0;
}