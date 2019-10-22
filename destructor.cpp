#include<iostream>
using namespace std;
class A{
	public:A();
		~A();
};
A::A(){
	cout<<"obj created"<<endl;
}
A::~A(){
	cout<<"obj destroy"<<endl;
}
int main(){
	A a1,a2;
	return 0;
}
