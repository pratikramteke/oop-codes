#include<iostream>
using namespace std;
class A{
	public:
		virtual void display(){
			cout<<"I am A"<<endl;
		}
};
class B:public A{
	public:
		void display(){
			cout<<"I am B"<<endl;
		}
};
int main(){
	A *ar;
	B b;
	ar=&b;
	ar->display();
	return 0;
}
