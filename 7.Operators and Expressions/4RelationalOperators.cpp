#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	
	// < , > , <= , >=, == , !=
	int a = 20, b = 3, c = 3;
	cout<<"a<b : "<<(a<b)<<endl;
	cout<<"a>b : "<<(a>b)<<endl;
	cout<<"c<=b : "<<(c<=b)<<endl;
	cout<<"a>=b : "<<(a>=b)<<endl;
	cout<<"a!=b : "<<(a!=b)<<endl;
	cout<<"b==c : "<<(b==c)<<endl;


	return 0;
}