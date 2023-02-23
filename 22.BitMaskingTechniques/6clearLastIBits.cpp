#include <bits/stdc++.h>
using namespace std;

void clearBitsInRange(int &n, int i,int j){
	int mask1 = (~0<<(j+1));
	int mask2 = (1<<i)-1;
	int mask = mask1|mask2;
	n = n&mask;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n = 13;
	int i,j;
	cin>>i>>j;
	clearBitsInRange(n,i,j);
	cout<<n<<endl;
	return 0;
}