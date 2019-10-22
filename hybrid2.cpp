#include<iostream>
using namespace std;
class student{
	int rollno;
	string name,branch,address;
	public:
		void sets(){
			cout<<"enter rollno:";
			cin>>rollno;
			cout<<"enter name:";
			cin>>name;
			cout<<"enter branch:";
			cin>>branch;
			cout<<"enter address:";
			cin>>address;
		}
		void gets(){
			cout<<"rollno:"<<rollno<<endl;
			cout<<"name:"<<name<<endl;
			cout<<"branch:"<<branch<<endl;
			cout<<"address:"<<address<<endl;
		}
};
class attendence{
	public: int theory1,theory2;
	public:
		void seta(){
			cout<<"enter attendance in theory1:";
			cin>>theory1;
			cout<<"enter attendence in theory2:";
			cin>>theory2;
		}
		void geta(){
			cout<<"attendence in theory1:"<<theory1<<endl;
			cout<<"attendence in theory2:"<<theory2<<endl;
		}
};
class attendencereport:public student,public attendence{
	int month;
	public:
		void getam(){
			cout<<"attendence of month:"<<theory1+theory2<<endl;
		}
};
class unittest{
	int mark1,mark2,total;
	public:
		void setu(){
			cout<<"enter mark1:";
			cin>>mark1;
			cout<<"enter mark2:";
			cin>>mark2;
		}
		void getu(){
			cout<<"total mark:"<<mark1+mark2<<endl;
		}
};
class unitestreport:public attendencereport,public unittest{
	public:
		void display(){
			cout<<"Unit test report"<<endl;
		}
};
int main(){
	unitestreport u;
	u.sets();
	u.seta();
	u.setu();
	u.display();
	u.gets();
	u.geta();
	u.getam();
	u.getu();
	return 0;
}
