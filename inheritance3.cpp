#include<iostream>
using namespace std;
class duck{
	public:
		void swim(){
			cout<<"duck can swim"<<endl;
		}
		void fly(){
			cout<<"duck can fly"<<endl;
		}
};
class redheadduck:public duck{
	public:
		void display(){
			cout<<"redheadduck"<<endl;
		}
		void quack(){
			cout<<"quack quack"<<endl;
		}
};
int main(){
	redheadduck r;
	r.display();
	r.swim();
	r.fly();
	r.quack();
	return 0;
}
