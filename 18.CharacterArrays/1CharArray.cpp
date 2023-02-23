// Character Array
// 1.Sequence of characters stored in contigious memory location.
// 2.Need to explicitly terminate by NULL character
// 3.Char array support read, write and update.

// String Literals
// Sequence of characters stored in double quotes.
// Stored in read only memory.
// Terminated by NULL character.
// It is not character array.

#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	char arr[]{"Sahil"};
	cout<<arr<<endl;

	char company [100] = "Walchand";
	cout<<company<<endl;

	char name [] = {'a','b','c','d','\0'};
	cout<<name<<endl;

	//length of array
	//strlen() does not count NULL character while counting length.
	cout<<strlen(arr)<<endl;
	return 0;
}