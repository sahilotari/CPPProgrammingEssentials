// Take input string terminated with $,
// Count the number of letters alphabets, digits,  whitespaces and other special symbols
#include <bits/stdc++.h>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	char arr[1000];
	cin.getline(arr,1000,'$');
	int alphabets=0, digits=0, whitespaces=0, symbols=0;

	for(int i=0;arr[i]!='\0';i++){
		char ch = arr[i];
		if(isalpha(ch)){
			alphabets++;
		}else if(isdigit(ch)){
			digits++;
		}else if(isspace(ch)){
			whitespaces++;
		}
	}
	symbols = strlen(arr) - alphabets-digits-whitespaces;
	cout<<"Alphabets: "<<alphabets<<endl;
	cout<<"Digits: "<<digits<<endl;
	cout<<"whitespaces: "<<whitespaces<<endl;
	cout<<"Other symbols: "<<symbols<<endl;

	return 0;
}