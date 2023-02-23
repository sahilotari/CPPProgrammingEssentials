#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	
	vector<int> arr = {1,2,3,4,5};

	//push_back(x)  - O(1)
	arr.push_back(6);

	//pop_back()
	arr.pop_back();
	//print all elements
	for(int i=0; i<arr.size(); i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	//Size - actual number of elements
	cout<<"Size of Vector : "<<arr.size()<<endl;

	//capacity of a vector 
	cout<<"Capacity of Vector : "<<arr.capacity()<<endl;
	return 0;
}