/*
Function Overloading
- it is a language feature.
- Create multiple functions with same name 
	-Different datatype of parameters.
	-Different number of parameters.
*/
#include <bits/stdc++.h>

//Function overloading with different number of parameters
int area(int l, int b){
	return l*b;
}

int area(int l){
	return l*l;
}

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	cout<<"Area of Square : "<<area(10)<<endl;
	cout<<"Area of Rectangle : "<<area(10,8)<<endl;
	return 0;
}