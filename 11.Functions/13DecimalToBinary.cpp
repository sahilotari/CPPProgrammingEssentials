#include <bits/stdc++.h>

using namespace std;


int decimalToBinary(int n){
	int res = 0;
	int p = 1;
	while(n){
		res = res + (n%2)*p;
		p *= 10;
		n/=2;
	}
	return res;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	cout<<decimalToBinary(11)<<endl;
	return 0;
}