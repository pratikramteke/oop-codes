#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream in("myfile",ios::in);
	if(!in){
		cout<<"can not open";
		return 1;
	}
	char name[10]="pratik";
	int age=20;
	in>>name>>age;
	cout<<name<<age<<endl;
	in.close();
	return 0;
}
