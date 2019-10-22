#include<iostream>
using namespace std;
class example{
	int a;
	public:
		void seta(int p){
			a=p;
		}
		void add(example e1,example e2){
			a=e1.a+e2.a;
		}
		void printa(){
			cout<<"a="<<a<<endl;
		}
};
int main(){
	example obj1;
	obj1.seta(10);
	obj1.printa();
	example obj2;
	obj2.seta(20);
	obj2.printa();
	example obj3;
	obj3.seta(0);
	obj3.add(obj1,obj2);
	obj3.printa();
	return 0;
}
	
