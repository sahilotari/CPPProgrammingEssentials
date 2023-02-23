#include <bits/stdc++.h>
using namespace std;

int isPrime(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

void primesInRange(int a, int b){
	for(int i=1;i<=b;i++){
		if(isPrime(i)){
			cout<<i<<" ";
		}
	}
	cout<<endl;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	primesInRange(1,200);
	return 0;
}