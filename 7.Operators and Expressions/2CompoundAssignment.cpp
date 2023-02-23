#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	
	//Compound Assignment Operator
	int a = 20;
	int b = 3;

	a += b; // a = a+b;
	cout<<"a+=b : "<< a << endl;
	a -= b; // a = a-b;
	cout<<"a-=b : "<< a << endl;
	a *= b; // a = a*b;
	cout<<"a*=b : "<< a << endl;
	a /= b; // a = a/b;
	cout<<"a/=b : "<< a << endl;
	a %= b; // a = a%b;
	cout<<"a%=b : "<< a << endl;

	return 0;
}