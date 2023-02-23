#include <bits/stdc++.h>

using namespace std;
// == , !=, >, >=, <, <=, +, +=
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	string s1,s2;
	cin>>s1>>s2;
	if(s1==s2){
		cout<<"Both are equal\n";
	}else if(s1>s2){
		cout<<s1+" comes after "+s2<<endl;
	}else{
		cout<<s1+" comes before "+s2<<endl;
	}
	string name = "Sahil";
	name += " Otari";
	cout<<name<<endl;
	return 0;
}