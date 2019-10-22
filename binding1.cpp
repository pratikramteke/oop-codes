#include<iostream>
using namespace std;
class vehicle{
	public:
		virtual void noofwheel(){
			cout<<"i have wheel"<<endl;
		}
};
class bike:public vehicle{
	public:
		void noofwheel(){
			cout<<"bike has 2 wheel"<<endl;
		}
};
class bus:public vehicle{
	public:
		void noofwheel(){
			cout<<"bus has 8 wheel"<<endl;
		}
};
int main(){
	vehicle *v1,*v2;
	bike b;
	bus bu;
	v1=&b;
	v2=&bu;
	v1->noofwheel();
	v2->noofwheel();
	return 0;
}
