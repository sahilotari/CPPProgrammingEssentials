#include <bits/stdc++.h>
//constants using preprocessor directives
#define PI 3.142   // 3.142 is just replacement for PI, its not a bucket in memory.
#define LOAN_PERIOD 10

using namespace std;


int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	//Constant using const keyword
	const float pi = 3.142;
	const int loan_period = 10;

	// Don't do this :Initialisation is must for constants;
	// const int p;
	// p = 10;

	cout<<PI<<"  "<<LOAN_PERIOD<<endl;
	cout<<pi<<"  "<<loan_period<<endl;
	return 0;
}