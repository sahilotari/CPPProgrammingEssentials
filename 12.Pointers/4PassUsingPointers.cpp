#include <bits/stdc++.h>

using namespace std;

void watchVideo(int * viewsPtr){
	// view increment by one
	*viewsPtr += 1;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int views = 100;
	watchVideo(&views);
	cout<<views<<endl;
	return 0;
}