#include <bits/stdc++.h>

using namespace std;

bool checkPassword(char * password, char *expectedPass){
	int ind = 0;
	while(password[ind]!='\0'){
		if(password[ind]!=expectedPass[ind]){
			return false;
		}
		ind++;
	}
	return true;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	
	char * expectedPass = "Pass@123";
	char password[100];
	cin>>password;
	if(checkPassword(password,expectedPass)){
		cout<<"Login Successful\n";
	}else{
		cout<<"Wrong Password\n";
	}
	return 0;
}