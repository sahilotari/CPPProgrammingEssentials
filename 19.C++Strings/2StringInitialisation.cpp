#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	string s1;
	string s2{"Hello"};
	string s3{s2};
	string s4{"Hello",3}; //Hel
	string s5(3,'N'); //NNN
	string s6{s2,0,2}; //He

	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
	cout<<s4<<endl;
	cout<<s5<<endl;
	cout<<s6<<endl;

	string s7 = "Hi ";
	s7 = s7 + " Bye bYe byE";
	cout<<s7<<endl;
	return 0;
}