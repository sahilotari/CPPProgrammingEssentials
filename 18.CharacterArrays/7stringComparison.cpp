#include <bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	
	char word1[100];
	char word2[100];

	cin>>word1>>word2;
	cout<<strcmp(word1,word2)<<endl;
	//If <0 - first word is smaller
	//If==0 - Both words equal
	//If >0 - first word is greater

	return 0;
}