#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int i;
	ofstream out("second.cpp",ios::out|ios::binary);
	if(!out){
		cout<<"can not open"<<endl;
		return 1;
	}
	for(i=0;i<256;i++){
		out.put((char)i);
	}
	return 0;
}
