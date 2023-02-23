#include <bits/stdc++.h>
using namespace std;

unordered_map<int,string> mp ={
	{0,"zero"},{1, "one"},
	{2, "two"},{3, "three"},
	{4, "four"},{5,"five"},
	{6,"six"},{7,"seven"},
	{8,"eight"},{9,"nine"}
};

void NumberSpell(int n){
	if(n==0){
		return;
	}
	int rem = n%10;
	NumberSpell(n/10);
	cout<<mp[rem]<<" ";
}

int main()
{
	NumberSpell(2021);
	cout<<endl;
	
	return 0;
}