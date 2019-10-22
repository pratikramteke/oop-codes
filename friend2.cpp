#include<iostream>
using namespace std;
class B;
class A{
	int x;
	public:
		void getx(int a);
		void display();
		friend void addfive(A,B);
};
void A::getx(int a){
	x=a;
}
void A::display(){
	cout<<"x="<<x<<endl;
}
class B{
	int y;
	public:
		void gety(int a);
		void displayb();
		friend void addfive(A,B);
};
void B::gety(int a){
	y=a;
}
void B::displayb(){
	cout<<"y="<<y<<endl;
}
void addfive(A a1,B b1){
	int s=(a1.x+b1.y)+5;
	cout<<"sum:"<<s<<endl;
}
int main(){
	A a1;
	B b1;
	a1.getx(10);
	a1.display();
	b1.gety(20);
	b1.displayb();
	addfive(a1,b1);
	return 0;
}
