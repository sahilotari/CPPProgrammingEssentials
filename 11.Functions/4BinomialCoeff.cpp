#include <bits/stdc++.h>

using namespace std;

int factorial(int n){
	int ans = 1;
	if(n==0 || n == 1){
		return 1;
	}
	for(int i=2;i<=n;i++){
		ans *= i;
	}
	return ans;
}

int binomialCoef(int N, int R){
	int ans = factorial(N)/(factorial(N-R)*factorial(R));
	return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	cout<<binomialCoef(5,2)<<endl;
	return 0;
}