/*
- Assignment operator is called when an already initialized object is assigned a new value
  from another existing object.

- Deep Copy - Deep copy is possible only with user defined copy constructor.

*/


#include <bits/stdc++.h>
using namespace std;

//Product (shopping Website)
class Product{
	int id;
	char *name;
	int mrp;
	int selling_price;
public:
	//Constructor
	Product(){
		cout<<"Inside Constructor\n";
	}
	Product(int id, char *n,int mrp, int selling_price){
		this->id = id;
		name = new char[strlen(n)+1];
		strcpy(name,n);
		this->mrp = mrp;
		this->selling_price = selling_price;

	}

	Product(Product &X){
		//Create to the copy
		id = X.id;
		mrp = X.mrp;
		//*****//
		name = new char[strlen(X.name)+1];
		strcpy(name,X.name);
		selling_price = X.selling_price;
	}

	//Copy Assignment Operator
	void operator=(Product &X){
		id = X.id;
		mrp = X.mrp;
		//*****//
		name = new char[strlen(X.name)+1];
		strcpy(name,X.name);
		selling_price = X.selling_price;
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
	void setName(char *name){
		strcpy(this->name,name);
	}

	//Getters
	int getMrp(){
		return mrp;
	}
	int getSellingPrice(){
		return selling_price;
	}

	void showDetails(){
		cout<<"Name: "<<name<<endl;
		cout<<"Id: "<<id<<endl;
		cout<<"MRP: "<<mrp<<endl;
		cout<<"Selling Price: "<<selling_price<<endl;

	}
};	


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	Product camera(101,"GoProHero9",28000,30000);
	Product oldCamera;

	oldCamera = camera; //Copy Assignment Operator is called
	oldCamera.setName("GoProHero8");

	oldCamera.showDetails();
	camera.showDetails();
	return 0;
}