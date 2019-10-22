#include<iostream>
using namespace std;
class vehicle{
	public:
		void brake(){
			cout<<"vehicle brake"<<endl;
		}
		void fuelcapacity(){
			cout<<"vehicle fuelcapacity"<<endl;
		}
};
class car:public vehicle{
	public:
		void display(){
			cout<<"vehicle car"<<endl;
		}
};
int main(){
	car c;
	c.display();
	c.brake();
	c.fuelcapacity();
	return 0;
}
