#include <bits/stdc++.h>

using namespace std;
int binaryToDecimal(int n){
	int x = 1;
	int ans = 0;
	while(n){
		if(n%10){
			ans += x;
		}
		n/=10;
		x*=2;
	}
	return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n;
	cin>>n;
	cout<<binaryToDecimal(n)<<endl;


	return 0;
}