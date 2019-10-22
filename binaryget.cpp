#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char ch;
	ifstream ifs("first.cpp",ios::in|ios::binary);
	if(!ifs){
		cout<<"can not open"<<endl;
	}
	while(ifs.get(ch)){
		cout<<ch;
	}
	ifs.close();
	return 0;
}
