#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	for(int i=2;i<=n-1;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	cout<< (isPrime(6)?"Prime\n":"Not Prime\n");
	cout<< (isPrime(19)?"Prime\n":"Not Prime\n");

	return 0;
}