#include<iostream>
using namespace std;
class A{
	public :int a,b;
	public:
		void set(){
			cout<<"enter value of a:";
			cin>>a;
			cout<<"enter value of b:";
			cin>>b;
		}
		void display1(){
			cout<<"value of a:"<<a<<endl;
			cout<<"value of b:"<<b<<endl;
		}
};
class B:protected A{
	public:
		void display2(){
			set();
			display1();
			cout<<"values are "<<a<<" "<<b<<endl;
		}
};
int main(){
	B b;
	b.display2();
	return 0;
}
