#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	//Read integer N followed by N strings
	//Print the largest string
	int n;
	cin>>n;

	cin.get(); //consume extra '\n' after the int input.
	char cur[1000]; //as per constraints;
	char largest[1000];
	int len = 0;

	for(int i=0;i<n;i++){
		cin.getline(cur,1000,'\n');
		int curLen = strlen(cur);
		if(curLen>len){
			len = curLen;
			strcpy(largest,cur);
		}
	}
	cout<<largest<<endl;

	return 0;
}