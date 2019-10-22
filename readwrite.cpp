#include<iostream>
#include<fstream>
using namespace std;
int main(){
	double fnum[4]={99.35,34.4,1995.0,200.1};
	int i;
	ofstream out("number",ios::out|ios::binary);
	if(!out){
		cout<<"CAN NOT OPEN FILE"<<endl;
		return 1;
	}
	out.write((char *)&fnum,sizeof(fnum));
	out.close();
	for(i=0;i<4;i++){
		fnum[i]=0.0;
	}
	ifstream in("number",ios::in|ios::binary);	
	in.read((char*)&fnum,sizeof(fnum));
	cout<<in.gcount()<<"number of char: ";
	for(i=0;i<4;i++){
		cout<<fnum[i]<<" ";
	}
	in.close();	
	return 0;
}
