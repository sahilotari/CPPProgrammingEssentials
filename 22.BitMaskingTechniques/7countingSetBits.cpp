#include <bits/stdc++.h>
using namespace std;

int countSetBits1(int n){
	int cnt = 0;
	while(n){
		if(n&1){
			cnt++;
		}
		n>>=1;
	}
	return cnt;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n = 13;
	// int i,j;
	// cin>>i>>j;
	cout<<countSetBits1(n)<<endl;
	return 0;
}