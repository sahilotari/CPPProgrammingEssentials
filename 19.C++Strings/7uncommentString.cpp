#include <bits/stdc++.h>

using namespace std;

string uncomment(string s){
	int ind = s.find("/*");
	int ind2 = s.find("*/");

	return s.substr(ind+2,ind2-ind-2); //s.substr(start,length)
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	
	string s = " /* Hello World */";
	cout<<uncomment(s)<<endl;
	return 0;
}