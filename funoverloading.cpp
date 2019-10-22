#include<iostream>
using namespace std;
class integer{
	int a,b,c;
	public: void setdata(int a,int b);
		void setdata(int a,int b,int c);
};
void integer::setdata(int a,int b){
	cout<<a+b;
}
void integer::setdata(int a,int b,int c){
	cout<<a+b+c;
}
int main(){
	integer r;
	r.setdata(1,2);
	r.setdata(1,2,3);
	return 0;
}
