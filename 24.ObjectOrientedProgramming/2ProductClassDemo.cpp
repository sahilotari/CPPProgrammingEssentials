#include <bits/stdc++.h>
using namespace std;

//Product (shopping Website)
class Product{
	int id;
	char name[100];
public:
	int mrp;
	int selling_price;
};


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	Product camera;
	cout<<sizeof(camera)<<endl;
	camera.mrp = 100;
	camera.selling_price = 90;
	cout<<"MPR: "<<camera.mrp<<endl;
	cout<<"Selling Price: "<<camera.selling_price<<endl;
	return 0;
}