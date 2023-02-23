#include <bits/stdc++.h>

using namespace std;

pair<int,int> stairCaseSearch(int mat[][100], int n, int m, int key){
	int i = 0, j = m-1;
	if(key<mat[0][0] || key > mat[n-1][m-1]){
		return {-1,-1};
	}

	while(i<n && j>=0){
		if(mat[i][j] == key){
			return {i,j};
		}else if(mat[i][j]<key){
			i++;
		}else{
			j--;
		}
	}
	return {-1,-1};
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
	int key  = 10;
	pair<int,int> coords = stairCaseSearch(arr,n,m,key);
	if(coords.first== -1){
		cout<<key<<" NOT Found..\n";
	}else{
		cout<<key<<" found at row :"<<coords.first<<" and col : "<<coords.second<<endl;
	}
	return 0;
}