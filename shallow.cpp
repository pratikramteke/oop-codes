#include<iostream>
#include<string.h>
using namespace std;
class shallow{
	int *x;
	public:
		shallow(int a){
			x=new int(a);
		}
		void printx(){
			cout<<"x:"<<*x<<endl;
		}
		void setx(int p){
			*x=p;
		}
	shallow(shallow &s){
		x=new int(*s.x);
		cout<<"copy constructor"<<endl;
	}
};
int main(){
	shallow s1(10);
	shallow s2(s1);
	s1.printx();
	s2.printx();
	s1.setx(12);
	s1.printx();
	s2.printx();
	return 0;
}
