#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	
	int a = 20;
	int b = 3;
	a++; //a = a+1;
	b--; //b = b-1;
	cout<<"A: "<<a<<endl;
	cout<<"B: "<<b<<endl;

	//Behavoiur ; preincrement(++a) and postincrement(a++);
	//postincrement: first value is used and then it is increased;
	//preincrement: first value is incremented and then it is used;
	int x = 10;
	int y = x++; // 1. y = x, 2. x = x+1;
	cout<<"x : "<<x <<"  y : "<<y<<endl;
	int z = ++x; // 1. x = x+1, 2. y = x;
	cout<<"x : "<<x <<"  z : "<<z<<endl;
	return 0;
}