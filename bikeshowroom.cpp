#include<iostream>
using namespace std;
static int count=0;
class bike{
	string modelno;
	string type;
	int year;
	int cost;
	public:
		bike(){
			count++;
		}
		void getdata(){
			cout<<"enter bike modelno:";
			cin>>modelno;
			cout<<"enter type of bike:";
			cin>>type;
			cout<<"enter year:";
			cin>>year;
			cout<<"enter cost:";
			cin>>cost;
		}
		void display(){
			cout<<"bike modelno:"<<modelno<<endl;
			cout<<"bike type:"<<type<<endl;
			cout<<"year:"<<year<<endl;
			cout<<"cost:"<<cost<<endl;
		}
		void countr(){
			cout<<"no of bike:"<<count<<endl;
		}
};
int main(){
	bike b1,b2;
	b1.getdata();
	b1.display();
	b2.getdata();
	b2.display();
	b1.countr();
	return 0;
} 
