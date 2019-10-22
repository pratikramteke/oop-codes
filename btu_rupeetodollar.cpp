#include<iostream>
using namespace std;
class Conversion{
	float dollar;
	public:
	Conversion(){
		dollar=0;
	}
	Conversion(float a){
		dollar=a/70;
	}
	void getdata(){
		cout<<"dollar:"<<dollar;
	}
};
int main(){
	float rupee;
	cout<<"enter rupee:";
	cin>>rupee;
	Conversion c;
	c=rupee;
	c.getdata();
	return 0;
}
