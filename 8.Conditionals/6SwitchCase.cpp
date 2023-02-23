#include <bits/stdc++.h>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int day;
	cin>>day;
	switch(day){
	case 1: cout<<"Monday\n";
		break;
	case 2: cout<<"Tuesday\n";
		break;
	case 3: cout<<"Wednesday\n";
		break;
	case 4: cout<<"Thurday\n";
		break;
	case 5: cout<<"Friday\n";
		break;
	case 6: cout<<"Saturday\n";
		break;
	case 7: cout<<"Sunday\n";
		break;
	default:
		cout<<"Enter a valid day\n";
	}
	return 0;
}