#include<iostream>
using namespace std;
class A{
	private:int a=10;
	public:int b=20;
	protected:int c=30;
	public:
		void geta(){
			cout<<a;
		}
		void getb(){
			cout<<b;
		}
		void getc(){
			cout<<c;
		}
};
class B:public A{
	public:
	void display(){
		cout<<a;
		cout<<b;
		cout<<c;
	}
};
int main(){
	 B b;
	b.geta();
	b.getb();
	b.getc();
	b.display();
	return 0;
}
