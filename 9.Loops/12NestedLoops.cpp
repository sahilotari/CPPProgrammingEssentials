
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int R,C;
	cin>>R>>C;
	int val = 1;
	for(int row=0; row< R; row++){
		for(int col = 0; col<C; col++){
			cout<<val<<" ";
			val++;
		}
		cout<<endl;
	}
	return 0;
}