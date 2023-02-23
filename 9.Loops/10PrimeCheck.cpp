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
	bool b = true;
	for(int i=2;i*i<=n; i++){
		if(n%i==0){
			b = false;
			break;
		}
	}
	if(b){
		cout<<"Prime\n";
	}else{
		cout<<"Non Prime\n";
	}
	return 0;
}