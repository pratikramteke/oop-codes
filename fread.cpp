#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream ifs("myfile");
	char ch;
	while(ifs){
		ifs.get(ch);
		cout<<ch;
	}	
	ifs.close();
	return 0;
}
