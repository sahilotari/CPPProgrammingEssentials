#include <bits/stdc++.h>
/*
1
23
456
*/
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
    int n;
    cin>>n;
    int k = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<k++;
        }
        cout<<endl;
    }
	return 0;
}