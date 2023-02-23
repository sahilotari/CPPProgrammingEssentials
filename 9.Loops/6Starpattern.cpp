#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	
	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		//spaces
		for(int space = 1; space<=n-i; space++){
			cout<<" ";
		}
		//stars
		for(int stars = 1; stars<=2*i-1; stars++){
			cout<<"*";
		}

		//line end
		cout<<endl;
	}

	return 0;
}