//Find average of 5 numbers and print the output upto 4 decimal places. 
#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	int sum = a+b+c+d+e;
	cout << fixed << setprecision(4) << (float)sum/5 << endl;
	return 0;
}