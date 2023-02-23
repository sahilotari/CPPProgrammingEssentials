#include <iostream>
using namespace std;

int fibonacci(int n){
	//base case 
	if(n<=1){
		return n;
	}
	//recursive case
	//two recursive call
	// time can be reduced if we use memoization (dp).
	return fibonacci(n-1)+fibonacci(n-2);
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<fibonacci(n)<<endl;
	return 0;
}