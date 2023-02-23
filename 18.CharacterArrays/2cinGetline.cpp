#include <bits/stdc++.h>
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	//Define an array and read user input
	char greeting[100];
	//Directly input list of characters and they are stored in array, automatically.
	//No need to use for loops.
	//cin>>greeting;
	cin.getline(greeting,100);
	cout<<greeting<<endl;

	//Use cin when you want to read the word(No Spaces).
	//Use cin.getline() when you want to read sentence (with spaces).
	// cin.getline(<charArrayName>, capacity, delimeter)

	return 0;
}