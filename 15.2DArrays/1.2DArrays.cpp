#include <bits/stdc++.h>

using namespace std;

void print(int arr[][100], int n, int m){
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int arr[1000][100];
	int n,m;  // n- rows, m- columns
	cin>>n>>m;

	//take input
	for(int i=0;i<n;i++){
		for(int j=0; j<m; j++){
			cin>>arr[i][j];
		}
	}

	//print 2D array
	print(arr,n,m);
	return 0;
}