/*class name as internal mark declare variable such as mark1 mark2 mark3 define fun total and percentage define external fun avg which is friend of class mark and calculate avg mark*/
#include<iostream>
using namespace std;
class marks{
	int m1,m2,m3,t;
	float p;
	public:
		void getm(int a,int b,int c);
		void total();
		void percentage();
		friend int average(marks m);
};
void marks::getm(int a,int b,int c){
	m1=a;
	m2=b;
	m3=c;
}
void marks::total(){
	t=m1+m2+m3;
	cout<<"total:"<<t<<endl;
}
void marks::percentage(){
	p=((m1+m2+m3)/150.0)*100;
	cout<<"percentage:"<<p<<endl;
}
int average(marks m){
	return m.t/3;
}
int main(){
	marks m;
	m.getm(30,20,10);
	m.total();
	m.percentage();
	int avg=average(m);
	cout<<"avg="<<avg<<endl;
	return 0;
}
