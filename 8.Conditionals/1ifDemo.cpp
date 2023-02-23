#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	
	int marks;
	cin>>marks;
	//When brackets are not used, only one line is considered to be in if block.
	if(marks>80){
		cout<<"Let's party !!!...."<<endl;
		cout<<"Yayyy..."<<endl;
	}
	return 0;
}