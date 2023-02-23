#include <iostream>
using namespace std;

int power(int a,int n){
	// base case
	if(n==0){
		return 1;
	}
	return a * power(a,n-1);

}

int pow2(int a,int n){
	// base case
	if(n==0){
		return 1;
	}
	int subAns = pow2(a,n/2);
	if(n&1){

		return a*subAns*subAns;
	}else{
		return subAns*subAns;
	}
}
int main()
{
	int a,n;
	cin>>a>>n;
	cout<<pow2(a,n)<<endl;
	
	return 0;
}