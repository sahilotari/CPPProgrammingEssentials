#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	
	string paragraph = "We are learning about STL strings. STL strings class is quite powerful";

	string word;
	cin>>word;
	//find function
	int index = paragraph.find(word);
	if(index!=-1){
		cout<<"first Occurence "<<index<<endl;
	}
	index = paragraph.find(word,index+1);
	if(index!=-1){
		cout<<"Next Occurence "<<index<<endl;
	}

	if(index==-1){
		cout<<"Word not found!\n";
	}
	return 0;
}