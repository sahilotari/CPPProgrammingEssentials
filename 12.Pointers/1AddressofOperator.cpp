#include <bits/stdc++.h>
// To get an address of a variable, we can use address-of-operator(&)
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int x = 10;
	float y = 10.5;
	cout<< &x<< endl;
	cout<< &y<< endl;
	return 0;
}