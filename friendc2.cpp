/*create two classes DM and DB which store values of distance.DM store distance in m and cm DB store distance in feet and inches.wap that can read values for the class obj and add one obj of DM with another obj of DB.
use friend function to carry out addition operation.the obj that stores the result may be a DM obj or DB obj depending on the units in which the results are required the display should be in the format of feet and inches or meter and cm depending on the obj on display*/
#include<iostream>
using namespace std;
class DB;
class DM{
	int d1,temp;
	friend int addition(DM,DB);
	public:
		void getd1(){
			cout<<"enter distance in m:";
			cin>>d1;
		}
		int cm=d1*100;
		void d(){
			cout<<temp<<endl;
		}
};
class DB{
	int d2;
	friend int addition(DM,DB);
	public:
		void getd2(){
			cout<<"enter distance in feet:";
			cin>>d2;
		}
		float m1=d2/3.208;
};
int addition(DM x,DB y){
	int x.temp=x.d1+y.m1;
	int addcm=x.cm+y.m1*100;
	return x.temp;
}
int main(){
	DM x;
	DB y;
	x.getd1();
	y.getd2();
	float f=addition(x,y);
	cout<<f<<endl;
	return 0;
}
