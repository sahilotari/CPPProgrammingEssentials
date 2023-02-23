#include <bits/stdc++.h>

using namespace std;

void applyTax(int &income){
	float tax = 0.1;
	income = income - tax*income;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int income;
	cin>>income;
	applyTax(income);
	cout<<income<<endl;
	return 0;
}