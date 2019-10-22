#include<iostream>
using namespace std;
class pizza{
	public:
		virtual void recepie()=0;
		void bake(){
			cout<<"pizza is baked"<<endl;
		}
		void cut(){
			cout<<"pizza is cut"<<endl;
		}
		void pack(){
			cout<<"pizza is packed"<<endl;
		}
};
class cheese:public pizza{
		public:
			void recepie(){
				cout<<"cheese pizza"<<endl;
			}
};
class corn:public pizza{
	public:
		void recepie(){
			cout<<"corn pizza"<<endl;
		}
};
class vegiee:public pizza{
	public:
		void recepie(){
			cout<<"vegiee pizza"<<endl;
		}
};
int main(){
	pizza *p1,*p2,*p3;
	cheese c;
	corn cn;
	vegiee v;
	p1=&c;
	p1->recepie();
	p1->bake();
	p1->cut();
	p1->pack();
	p2=&cn;
	p2->recepie();
        p2->bake();
        p2->cut();
        p2->pack();
	p3=&v;
	p3->recepie();
        p3->bake();
        p3->cut();
        p3->pack();
	return 0;
}
