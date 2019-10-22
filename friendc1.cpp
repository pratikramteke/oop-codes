#include<iostream>
using namespace std;
class A{
	int a=10,b=5;
	friend class B;
	public:
		void add(int x,int y){
			a=x;
			b=y;
			int s=a+b;
			cout<<"add="<<s<<endl;
		}
};
class B{
	int m=17,n=2;
	public:
		void sub(A aa){
			int sb=aa.a-aa.b;
			cout<<"sub="<<sb<<endl;
		}
		void mul(){
			int ml=m*n;
			cout<<"mul="<<ml<<endl;
		}
};
int main(){
	A obj1;
	//obj1.add(10,20);
	B obj2;
	obj2.sub(obj1);
	obj2.mul();
	return 0;
}
