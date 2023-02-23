#include <bits/stdc++.h>

using namespace std;
//Same number of parameters of different data types;
void print(int a){
	cout<<a<<endl;
}

void print(vector<int> v){
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	print(10);
	print({10,20,30,40});

	return 0;
}