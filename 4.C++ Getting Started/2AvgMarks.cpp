#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int phy, chem, maths;
	cout<<"Enter marks of Physics :"; cin>>phy;
	cout<<"Enter marks of Chemistry:"; cin>>chem;
	cout<<"Enter marks of Maths: "; cin>>maths;

	float avg = (phy + chem + maths)/3.0;
	cout<<"Average marks are "<<avg<<endl;
	return 0;
}

