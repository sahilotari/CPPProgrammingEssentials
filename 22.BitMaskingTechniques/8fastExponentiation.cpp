#include <bits/stdc++.h>
using namespace std;

//Fast Exponentiation
int fastPow(int a, int n){
	int ans =1;
	while(n>0){
		int last_bit = (n&1);
		if(last_bit){
			ans *= a;
		}
		a = a*a;
		n >>=1;
	}
	return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n = 13;
	cout<<fastPow(2,10)<<endl;
	
	return 0;
}