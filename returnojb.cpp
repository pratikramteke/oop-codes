#include<iostream>
using namespace std;
class example{
	int a;
	public:
		void seta(int p){
			a=p;
		}
		example add(example e1,example e2){
			example e3;
			e3.a=e1.a+e2.a;
			return e3;
		}
		void printa(){
			cout<<"a="<<a<<endl;
		}
};
int main(){
	example obj1,obj2,obj3;
	obj1.seta(10);
	obj1.printa();
	obj2.seta(20);
	obj2.printa();
	obj3=obj3.add(obj1,obj2);
	obj3.printa();
	return 0;
}
