// you can also use default parameter values, by using equals sign (=).
// if we call function without paramters, it uses default parameters
#include <bits/stdc++.h>

using namespace std;
//create the function
void playMusic(int songId1=1,int songId2 = 2 ){
	cout<<"Playing Music...."<<songId1<<" and "<<songId2<<endl;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	//calling function without parameter
	playMusic();

	//calling function with one parameter
	playMusic(5);

	//calling function with two parameters
	playMusic(100,200);
	return 0;
}