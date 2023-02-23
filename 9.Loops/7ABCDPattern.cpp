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
	for(int i=1; i<=n; i++){
		//print letters from A till cnt n-i+1 increasing
		char letter = 'A';
		for(int cnt=1;cnt<=n-i+1;cnt++){
			cout<<letter;
			letter++;
		}
		//print letters in decreasing

		//reset letter to prev printed character
		letter--;
		for(int cnt=1;cnt<=n-i+1;cnt++){
			cout<<letter;
			letter--;
		}
		cout<<endl;
	}

	return 0;
}