 // while(..condition is true ..){
 // 	//execute some stuff;

 // 	//update
 // }

#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	
	int cal = 0;
	while(cal < 10){
		cout<<"Running a step and burning "<<cal+1<<endl;
		cal++;
	}
	return 0;
}