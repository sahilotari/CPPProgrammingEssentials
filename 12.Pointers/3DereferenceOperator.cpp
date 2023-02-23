#include <bits/stdc++.h>
/*
An interesting property of pointers is that we can access
the value pointed by pointer directly.
This is done by preceding the pointer name with the dereference
operator (*). The operator itself can be read ac
"value pointed by"
*/
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int x = 10;
	int * xptr = &x;
	cout<<xptr<<endl;
	cout<<*xptr<<endl;


	return 0;
}