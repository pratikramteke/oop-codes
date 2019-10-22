#include<iostream>
using namespace std;
class Person{
	char name[30];
	int age;
	char gender[20];
	public:
		void setdata(){
			cout<<"enter name:";
			cin>>name;
			cout<<"enter age:";
			cin>>age;
			cout<<"enter gender:";
			cin>>gender;
		}
		void display(){
			cout<<"person info"<<endl;
			cout<<"name="<<name<<endl;
			cout<<"age="<<age<<endl;
			cout<<"gender="<<gender<<endl;
		}
};
class employee:public Person{
	int eid;
	char ename[30];
	public:
		void setdatae(){
			cout<<"enter eid:";
			cin>>eid;
			cout<<"enter employee name:";
			cin>>ename;
		}
		void display1(){
			cout<<"employee info"<<endl;
			cout<<"eid="<<eid<<endl;
			cout<<"ename="<<ename<<endl;
		}
};
class programmer:public employee{
		int nooflang;
		char name[30];
		public:
			void setdatap(){
				cout<<"enter no of lang:";
				cin>>nooflang;
				cout<<"name:";	
				cin>>name;
			}
			void display2(){
				cout<<"programmer info"<<endl;
				cout<<"no of lang:"<<nooflang<<endl;
				cout<<"name:"<<name<<endl;
			}
};
int main(){
	programmer p;
	p.setdata();
	p.setdatae();
	p.setdatap();
	p.display();
	p.display1();
	p.display2();
	return 0;
}
