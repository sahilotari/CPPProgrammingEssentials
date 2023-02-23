#include <bits/stdc++.h>
/*
1
01
101
0101
10101
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
    for(int i=1;i<=n;i++){
       //number
       for(int j=1;j<=i;j++){
           if(i%2==1){
               if(j%2==0){
               cout<<0;
               }else{
                   cout<<1;
               }
           }else{
               if(j%2==0){
                    cout<<1;
               }else{
                   cout<<0;
               }
           }
           
       }
       cout<<endl;
   } 
    return 0;
}