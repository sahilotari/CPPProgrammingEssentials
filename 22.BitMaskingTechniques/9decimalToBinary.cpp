#include <bits/stdc++.h>

using namespace std;

int convertToBinary(int n){
	int ans = 0;
	int p = 1;
	while(n){
		int last_bit= n&1;
		ans += p*last_bit;
		p*=10;
		n>>=1;
	}
	return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n= 13;
	cout<<convertToBinary(n)<<endl;
	return 0;
}