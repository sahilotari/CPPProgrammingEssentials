// Calculate the electricity bill based on following table.
// 1 to 100 - Free
// 101 to 200 - Rs5 /unit;
// 201 to 300 - Rs10 /unit;
// 301 ++ - Rs 12 /unit

#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int units;
	cin>>units;
	int ans = 0;
	if(units <= 100){
		ans = 0;
	}else if(units <= 200){
		ans = (units - 100)*5;
	}else if(units <= 300){
		ans = (units - 200)*10 + 100*5;
	}else{
		ans += (units - 300)*12 + 100*10 + 100 * 5;
	}
	cout<<ans<<endl;
	return 0;
}