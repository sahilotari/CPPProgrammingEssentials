#include <bits/stdc++.h>
/*
AA
ABBA
ABCCBA
ABCDDBA
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
    for(int i=0;i<n;i++){
        char ch = 'A';
        for(int j=0;j<=i;j++){
            cout<<ch;
            ch++;
        }
        ch--;
        for(int j=0;j<=i;j++){
            cout<<ch;
            ch--;
        }
        cout<<endl;
    }
   
	return 0;
}