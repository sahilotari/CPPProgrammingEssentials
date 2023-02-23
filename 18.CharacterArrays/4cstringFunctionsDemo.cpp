#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	char name[100];
	//We can't do:  name = "Sahil";
	// strcpy(dest,source);
	strcpy(name,"Sahil Otari");
	cout<<name<<endl;

	char greet[100];
	strcpy(greet,"Hi, ");
	strcat(greet,"How are you?");
	cout<<greet<<endl;
	return 0;
}