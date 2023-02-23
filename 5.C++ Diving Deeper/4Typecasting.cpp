#include <bits/stdc++.h>
using namespace std;


int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	cout<<(5/3)<<endl;
	//Typecasting: change of resulting datatype.

	//Implicit Typecasting: done by the compiler
	//float + int -> float
	cout<< 5/3.0 <<endl;
	cout<< 5.0/3 <<endl;

	//int and char ->int
	char ch = 'A';
	cout<< ch + 1<<endl;

	//Bool + int ->int
	bool b = true;
	cout<< b + 10<<endl;
	
	return 0;


}