#include <bits/stdc++.h>
//Pointer is a variable which stores the address of another variable
//To define a pointer we use asterik in between data type and variable name.
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int x = 10;
	cout<< &x<<endl;

	//Pointer to x;
	int * xptr = &x;
	cout<<xptr<<endl;

	//Address of pointer
	cout<< &xptr<<endl;

	//Pointer to the pointer
	int **xxptr = &xptr;
	cout<< xxptr<<endl;
	return 0;
}