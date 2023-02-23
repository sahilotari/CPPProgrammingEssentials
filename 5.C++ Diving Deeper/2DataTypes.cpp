#include <bits/stdc++.h>


using namespace std;
int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	cout<<"Char : " <<sizeof(char)<<endl;
	cout<<"Bool : " <<sizeof(bool)<<endl;
	cout<<"Int : " <<sizeof(int)<<endl;
	cout<<"Long : " <<sizeof(long)<<endl;
	cout<<"Long Long : " <<sizeof(long long int)<<endl;
	cout<<"Float : " <<sizeof(float)<<endl;
	cout<<"Double : " <<sizeof(double)<<endl;

	char ch = 'A';
	int myChar = ch;
	cout<<ch<<endl;
	cout<<myChar<<endl;

	bool b = 5; //non zero value as true;
	bool b1 = 0; //zero value as false;

	cout<<b << "    "<<b1<<endl;

	return 0;
}