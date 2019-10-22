#include<iostream>
using namespace std;
class A{
	int x;
	public:
		void display();
		void getx(int a);
		friend int addfive(A  a1);
};
void A::display(){
	cout<<"x="<<x<<endl;
}
void A::getx(int a){
	x=a;
}
int addfive(A a1){
	a1.x=a1.x+5;
	return a1.x;
}
int main(){
	A a1;
	a1.getx(10);
	a1.display();
	int m=addfive(a1);
	cout<<"m="<<m<<endl;
	return 0;
}
