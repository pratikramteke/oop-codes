#include<iostream>
using namespace std;
class person{
	char name[30];
	char gender[20];
	int age;
	public:
		void setp(){
			cout<<"enter name:";
			cin>>name;
			cout<<"enter gender:";
			cin>>gender;
			cout<<"enter age:";
			cin>>age;
		}
		void getp(){
			cout<<"name:"<<name<<endl;
			cout<<"gender:"<<gender<<endl;
			cout<<"age:"<<age<<endl;
		}
};
class student:public person{
	int rollno;
	public:
		void sets(){
			cout<<"enter rollno:";
			cin>>rollno;
		}
		void gets(){
			cout<<"rollno:"<<rollno<<endl;
		}
};
class medical:public student{
		public:
			void getm(){
				cout<<"i am medical student"<<endl;
			}
};
class engineering:public student{
		public:
			void gete(){
				cout<<"i am engineering student"<<endl;
			}
};
int main(){
	medical m;
	engineering e;
	m.setp();
	m.sets();
	e.setp();
	e.sets();
	m.getm();
	m.getp();	
	m.gets();
	e.gete();
	e.getp();
	e.gets();
	return 0;
}
