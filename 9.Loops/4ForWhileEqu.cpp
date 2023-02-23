#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int cal = 0;
	for( ; ; ){
		cout<<"Running a step and burning "<<cal+1<<endl;
		if(cal==9){
			break;
		}
		cal++;
	}
	return 0;
}