#include <bits/stdc++.h>
using namespace std;

void readLine(char * arr,int len, char delimeter){
	int cnt = 0;
	char ch;
	while(true){
		ch = cin.get();
		arr[cnt] = ch;
		if(cnt == len-1 || ch==delimeter){
			break;
		}
		cnt++;
	}

	arr[cnt]='\0';
	cout<<cnt<<endl;
}

int length(char *arr){
	int i=0;
	for(;arr[i]!='\0';i++){};
	return i;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	
	char arr[100];
	readLine(arr,100,'\n');
	cout<<arr<<endl;
	cout<<length(arr)<<endl;
	return 0;
}