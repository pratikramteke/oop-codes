#include<iostream>
using namespace std;
class point{
	int x,y;
	public:
		point(int a,int b){
			x=a;
			y=b;
		}
		/*point(point &p){//user defined copy constructor//
			x=p.x;
			y=p.y;
		}*/
		int getx(){
			return x;
		}
		int gety(){
			return y;
		}
};
int main(){
	point p1(10,20);
	cout<<"first obj x="<<p1.getx()<<endl;
	cout<<"first obj y="<<p1.gety()<<endl;
	//point p2(p1);
	point p2=p1;
	cout<<"second obj x="<<p2.getx()<<endl;
	cout<<"second obj y="<<p2.gety()<<endl;
	return 0;
}
