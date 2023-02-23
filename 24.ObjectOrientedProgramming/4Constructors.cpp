/*
- Constructor name = Class name
- Called Automatically when an object is created.
- Memory Allocation happens when constructor is called.
- Constructor is called only once for each object.
*/

#include <bits/stdc++.h>
using namespace std;

//Product (shopping Website)
class Product{
	int id;
	char name[100];
	int mrp;
	int selling_price;
public:
	//Constructor
	Product(){
		cout<<"Inside Constructor\n";
	}
	//Parameterised constructor.
	//Constructor overloading
	Product(int id, char *n,int mrp, int selling_price){
		this->id = id;
		strcpy(name,n);
		this->mrp = mrp;
		this->selling_price = selling_price;

	}
	//Setters
	void setMrp(int price){
		if(price>0)
			mrp = price;
	}
	void setSellingPrice(int price){
		//additional check
		if(price>mrp){
			selling_price = mrp;
		}else{
			selling_price = price;
		}

	}

	//Getters
	int getMrp(){
		return mrp;
	}
	int getSellingPrice(){
		return selling_price;
	}
};


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	Product camera(101,"GoProHero",28000,30000);
	cout<<sizeof(camera)<<endl;
	// camera.mrp = 100;
	// camera.selling_price = 90;
	// camera.setMrp(100);
	// camera.setSellingPrice(190);
	cout<<"MPR: "<<camera.getMrp()<<endl;
	cout<<"Selling Price: "<<camera.getSellingPrice()<<endl;
	return 0;
}