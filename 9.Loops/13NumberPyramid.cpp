/*
    1
   232
  34543
 4567654

*/

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
	for(int i=1;i<=n;i++){
		//spaces - N-i spaces
		for(int cnt=1;cnt<=n-i;cnt++){
			cout<<"  ";
		}
		//inc number - starting from i to i+i;
		int val = i;
		for(;val<i+i;val++){
			cout<<val<<" ";
		}
		//dec number from cur= val-2 to i
		val-=2;
		for(;val>=i;val--){
			cout<<val<<" ";
		}
		cout<<endl;



	}
	return 0;
}