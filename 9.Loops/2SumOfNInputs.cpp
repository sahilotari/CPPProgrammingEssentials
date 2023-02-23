#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	//Take input N, followed by N inputs, find their sum.
	int n;
	cin>>n;
	int x,sum=0;
	while(n>0){
		cin>>x;
		sum += x;
		n--;
	}
	cout<<sum<<endl;
	return 0;
}