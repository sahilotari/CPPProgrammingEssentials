#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	
	string name;
	//cin>>name; //Does not work with strings containing spaces.
	getline(cin,name); //Read till '\n'
	string greeting;
	getline(cin,greeting,'$'); //Read everything until hit dollor.
	cout<<"Hi "<<name<<endl;
	cout<<greeting<<endl;
	return 0;
}