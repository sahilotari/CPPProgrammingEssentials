#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	char numbers[][10]{
		"One",
		"Two",
		"Three",
		"Four",
		"Five"
	};

	cout<<numbers[3]<<endl;
	cout<<numbers[2][1]<<endl;
	return 0;
}