#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int x = 10;
	int &y = x;
	y++;

	cout<<x<<endl;
	cout<<y<<endl;
	return 0;
}