/*define class mark has m1 m2 m3 create class name as bonus marks based on online certification,attendence,assignment*/
#include<iostream>
using namespace std;
class bonus;
class mark{
	int m1,m2,m3,t;
	public:
		void getm(int x,int y,int z);
		void totalm();
		friend void final(mark,bonus);
};
void mark::getm(int x,int y,int z){
	m1=x;
	m2=y;
	m3=z;
}
void mark::totalm(){
	t=m1+m2+m3;
	cout<<"total mark:"<<t<<endl;
}
class bonus{
	int cer,att,as,b;
	public:
		void getb(int a,int b,int c);
		void bonusm();
		friend void final(mark,bonus);
};
void bonus::getb(int a,int b,int c){
	cer=a;
	att=b;
	as=c;
}
void bonus::bonusm(){
	b=cer+att+as;
	cout<<"bonus mark:"<<b<<endl;
}
void final(mark m,bonus b){
	int f=m.t+b.b;
	cout<<"final marks:"<<f<<endl;
}
int main(){
	mark m;
	bonus b;
	m.getm(10,20,30);
	m.totalm();
	b.getb(40,50,60);
	b.bonusm();
	final(m,b);
	return 0;
}
	
