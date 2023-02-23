// Function is a block of instructions which gets executed 
// only when it is called.

#include <bits/stdc++.h>
// General syntac of function
// return-type function-name(parameters if any){

// 	//some piece of code


// 	//return type (optional)
// }

using namespace std;
//create the function
void playMusic(){
	cout<<"Playing Music...."<<endl;
}


void sayHi(string name){
	cout<<"Hi "<< name<<endl;
}

string sayHello(string name){
	return "Hello "+ name;
}

float areaOfcircle(int rad){
	return 3.14*rad*rad;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	

	//call the function
	playMusic();

	//
	sayHi("Sahil");

	cout<<sayHello("Sahil")<<endl;

	cout<<areaOfcircle(7)<<endl;
	return 0;
}