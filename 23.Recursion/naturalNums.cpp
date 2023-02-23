#include <iostream>
using namespace std;

void PrintInc(int n){
	if(n>0){
		PrintInc(n-1);
		cout<<n<<" ";  //At returning time
		               //Bottom to top
	}
}
void PrintDec(int n){
	if(n>0){
		//when we are going towards the base case
		// top to bottom
		cout<<n<<" ";
		PrintDec(n-1);
	}
}

int main(int argc, char const *argv[])
{
	PrintInc(10);
	cout<<endl;
	PrintDec(10);
	cout<<endl; 
	return 0;
}