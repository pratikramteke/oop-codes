#include<iostream>
using namespace std;
class student{
	int rollno;
	int branchid;
	char name[30];
	public:
		void getdata();
		void putdata();
};
void student::getdata(){
	cout<<"enter roll no:";
	cin>>rollno;
	cout<<"enter branch-id:";
	cin>>branchid;
	cout<<"enter name:";
	cin>>name;
}
void student::putdata(){
	cout<<"Roll NO:"<<rollno<<endl;
	cout<<"Branch id:"<<branchid<<endl;
	cout<<"Name:"<<name<<endl;
}
int main(){
	int i,j;
	cout<<"No of student:";
	cin>>j;
	student s[j];
	for(i=0;i<j;i++){
		s[i].getdata();
	}
	for(i=0;i<j;i++){
		s[i].putdata();
	}
	return 0;
}
