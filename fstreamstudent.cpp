#include<iostream>
#include<fstream>
using namespace std;
class student{
	char name[30];
	int age;
	public:
		void getdata(){
			cout<<"enter name:";
			cin>>name;
			cout<<"enter age:";
			cin>>age;
		}
		void display(){
			cout<<"Name:"<<name<<endl;
			cout<<"Age:"<<age<<endl;
		}
};
int main(){
	student s;
	char ch;
	cout<<"1.add data to program"<<endl;
	cout<<"2.display data to console"<<endl;
	cout<<"3.read data from file"<<endl;
	cout<<"4.write data into a file"<<endl;
	cin>>ch;
	switch(ch){
		case '1':
			s.getdata();
			break;
		case '2':
			s.display();
			break;
		case '3':
			ifstream in("stream",ios::in|ios::binary);
			in.read((char*)&s,sizeof(s));
			in.close();
			break;
		case '4':
			ofstream out("stream",ios::out|ios::binary);
			out.write((char*)&s,sizeof(s));
			out.close();
			break;
		default:
			cout<<"wrong choice"<<endl;
			break;
	}
	return 0;
}
