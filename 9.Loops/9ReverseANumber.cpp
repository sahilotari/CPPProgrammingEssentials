#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n;
	cin>>n;
	int ans = 0;
	while(n){
		ans = ans*10 + n%10;
		n /=10;
	}
	cout<<ans<<endl;
	return 0;
}