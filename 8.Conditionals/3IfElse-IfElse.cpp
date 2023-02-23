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
	if(marks>80){
		cout<<"Let's party !!!...."<<endl;
	}else if(marks>60){
		cout<<"Good Job!"<<endl;
	}else{
		cout<<"Work hard next time!"<<endl;
	}
	return 0;
}