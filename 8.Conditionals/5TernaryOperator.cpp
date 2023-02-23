// condition ? statement1 : statement2;
// If condition is true, statement1 gets executed, 
// If condition is false, statement2 gets executed.

#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	
	int x;
	cin>>x;
	x%2==0? cout<<"Even\n" : cout<<"Odd\n";

	string weather = x>30 ? "Hot" : "Cool";
	cout<<weather<<endl;
	return 0;
}