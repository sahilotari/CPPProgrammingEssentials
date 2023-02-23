/*
- Creates a copy of given object
- Initialise an object using another object of the same class.
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
	Product(int id, char *n,int mrp, int selling_price){
		this->id = id;
		strcpy(name,n);
		this->mrp = mrp;
		this->selling_price = selling_price;

	}

	Product(Product &X){
		//Create to the copy
		id = X.id;
		mrp = X.mrp;
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
	Product camera(101,"GoProHero",28000,30000);
	//Copy is made using a special constructor-> Copy Constructor.
	Product webcam(camera);
	//Or Product handycam = camera;
	camera.showDetails();
	webcam.showDetails();
	return 0;
}