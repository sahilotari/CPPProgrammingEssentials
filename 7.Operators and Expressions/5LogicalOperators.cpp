#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	
	// &&, ||, !
	//Logical AND - true if both conditions are true;
	int phone = 15;
	int money = 20;
	int isSaleOn = true;

	if(money >= phone && isSaleOn){
		cout<<"Let's buy the phone "<<endl;
	}else{
		cout<<"I will wait "<<endl;
	}

	//Logical OR - true if one of the condition in true;
	isSaleOn = false;
	if(money >= phone || isSaleOn){
		cout<<"Let's buy a phone"<<endl;
	}else{
		cout<<"i will wait "<<endl;
	}

	//Logical NOT (unary)
	cout<<"Sale is On : "<<isSaleOn<<endl;
	cout<<"Sale is not On : "<<!isSaleOn<<endl;
	return 0;
}