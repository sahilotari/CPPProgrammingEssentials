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
	//When conditions are not satisfied, then else block is executed.
	if(marks>80){
		cout<<"Let's party !!!...."<<endl;
		cout<<"Yayyy..."<<endl;
	}else{
		cout<<"Work hard next time"<<endl;
	}
	//Else block is not used independently.
	//It will get connected with last if block.
	return 0;
}