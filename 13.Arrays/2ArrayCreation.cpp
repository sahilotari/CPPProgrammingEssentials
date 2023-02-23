#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	
	//By default, array will contain garbage values
	int arr[100];
	cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;

	int arr1[100] = {11,12,13,14};
	//first 4 elements are initialised other will be automatically 0.
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		cout<<arr1[i]<<" ";
	}
	cout<<endl;

	return 0;
}