#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	char a[1000] = "apple";
	char b[1000] ;
	//strlen
	cout<<strlen(a)<<endl;

	//strcpy(dest,source)
	strcpy(b,a);
	cout<<b<<endl;

	//compare - strcmp
	cout<<strcmp(a,b)<<endl;

	//concatenate
	char name[10] = "Sahil";
	char surname[10] = "Otari";
	cout<<strcat(name,surname)<<endl;
	return 0;
}