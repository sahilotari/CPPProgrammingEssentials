#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	
	int a,b;
	char op;
	cin>>a>>op>>b;
	switch(ch){
	case '+': cout<<a <<" + "<<b <<" = "<< a+b<<endl;
		break;
	case '-': cout<<a <<" - "<<b <<" = "<< a-b<<endl;
		break;
	case '*': cout<<a <<" * "<<b <<" = "<< a*b<<endl;
		break;
	case '/': cout<<a <<" / "<<b <<" = "<< a/b<<endl;
		break;
	case '%': cout<<a <<" % "<<b <<" = "<< a%b<<endl;
		break;
	default: cout<<"Enter a valid operator..\n";
	}


	return 0;
}