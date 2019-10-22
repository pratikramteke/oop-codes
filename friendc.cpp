#include<iostream>
using namespace std;
class square{
	friend class rectangle;
	int side;
	public:
		square(int s){
			side=s;
		}
};
class rectangle{
	int length=3,breadth=4;
	public:
		int getarea(){
			return length*breadth;
		}
		void shape(square s){
			length=s.side;
			breadth=s.side;
		}
};
int main(){
	square sq(5);
	rectangle r;
	cout<<r.getarea()<<endl;
	r.shape(sq);
	cout<<r.getarea()<<endl;
	return 0;
}
