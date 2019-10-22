#include<iostream>
using namespace std;
class vehicle{
	public:
		virtual void noofwheel()=0;
};
class bike:public vehicle{
	public:
		void noofwheel(){
			cout<<"bike has 2 wheel"<<endl;
		}
};
int main(){
	vehicle *v;
	bike b;
	v=&b;
	v->noofwheel();
	return 0;
}
