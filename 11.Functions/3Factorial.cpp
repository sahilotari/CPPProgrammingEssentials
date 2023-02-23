#include <bits/stdc++.h>
using namespace std;

//Write a function that returns factorial of a number.
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

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	
	cout<<factorial(5)<<endl;

	return 0;
}