#include <bits/stdc++.h>
using namespace std;
void setIthBit(int &n,int i){
	int mask = (1<<i);
	n = (n|mask);
}
void clearIthBit(int &n,int i){
	int mask = ~(1<<i);
	n = (n&mask);
}
void updateIthBit(int &n,int i,int v){
	clearIthBit(n,i);
	int mask = v<<i;
	n = n|mask;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n = 5;
	int i;
	cin>>i;
	updateIthBit(n,i,1);
	cout<<n<<endl;
	return 0;
}