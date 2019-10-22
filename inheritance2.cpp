#include<iostream>
using namespace std;
class student{
	public:
		void study(){
			cout<<"student can study"<<endl;
		}
		void eat(){
			cout<<"student can eat"<<endl;
		}
};
class lawstudent:public student{
	public:
		void display(){
			cout<<"law student"<<endl;
		}
};
int main(){
	lawstudent l;
	l.display();
	l.study();
	l.eat();
	return 0;
}
