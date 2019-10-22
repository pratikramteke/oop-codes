#include<iostream>
using namespace std;
class pizza{
	public:
		virtual void makepizza()=0;
		void bake(){
			cout<<"pizza is baked"<<endl;
		}
		void cut(){
			cout<<"pizza is cut"<<endl;
		}
		void pack(){
			cout<<"pizza is pack"<<endl;
		}
};
class cheesepizza:public pizza{
	public:
		void makepizza(){
			cout<<"cheesepizza is maked"<<endl;
		}
};
class cornpizza:public pizza{
	public:
		void makepizza(){
			cout<<"cornpizza is maked"<<endl;
		}
};
int main(){
	pizza *p1,*p2;
	cheesepizza c;
	cornpizza co;
	p1->bake();
	p1=&c;
	p1->makepizza();
	p1->cut();
	p1->pack();
	cout<<endl;
	p2->bake();
	p2=&co;
	p2->makepizza();
	p2->cut();
	p2->pack();
	return 0;
}
