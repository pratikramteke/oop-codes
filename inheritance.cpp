#include<iostream>
using namespace std;
class pizza{
	public:
		void bake(){
			cout<<"bake pizza"<<endl;
		}
		void cut(){
			cout<<"cut pizza"<<endl;
		}
		void pack(){
			cout<<"pack pizza"<<endl;
		}
};
class cornpizza:public pizza{
	public:
		void display(){
			cout<<"cornpizza"<<endl;
		}
};
int main(){
	cornpizza c;
	c.display();
	c.bake();
	c.cut();
	c.pack();
	return 0;
}
