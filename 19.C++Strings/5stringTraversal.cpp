#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	//Traversal
	// char array vs string;
	char name[100];
	strcpy(name,"Sahil");

	//using loop
	for(int i=0;i<strlen(name);i++){
		cout<<name[i]<<" ";
	}
	cout<<endl;
	//OR
	for(int i=0;name[i]!='\0';i++){
		cout<<name[i]<<" ";
	}
	cout<<endl;

	//Iterate over string

	string name1 = "Sahil Otari";
	for(int i=0;i<name1.length();i++){
		cout<<name1[i]<<" ";
	}
	cout<<endl;
	//OR
	for(char ch:name1){
		cout<<ch<<" ";
	}
	cout<<endl;

	return 0;
}