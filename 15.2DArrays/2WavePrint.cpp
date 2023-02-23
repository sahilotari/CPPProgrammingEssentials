#include <bits/stdc++.h>

using namespace std;

void wavePrint(int arr[][100], int row, int col){
	for(int i=0;i<col; i++){
		if(i%2==0){
			for(int j=0;j<row; j++){
				cout<<arr[j][i]<<" ";
			}
		}else{
			for(int j=row-1; j>=0; j--){
				cout<<arr[j][i]<<" ";
			}
		}
	}
	cout<<endl;
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
	wavePrint(arr,n,m);
	return 0;
}