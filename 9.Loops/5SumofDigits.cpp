#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	//Given a number N, find the sum of digits
	int n;
	cin>>n;
	int ans = 0;
	while(n){
		ans += n%10;
		n /=10;
	}
	cout<<ans<<endl;
	return 0;
}