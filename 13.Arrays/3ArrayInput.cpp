#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	
	int arr[100];
	int n;
	cin>>n;
	//Read n elements
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	//Print array
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return 0;
}