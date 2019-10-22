#include<iostream>
using namespace std;
int main(){
	int x,y,sum,sub,mul,div,mod,ch;
	cout<<"Enter x=";
	cin>>x;
	cout<<"Enter y=";
	cin>>y;
	cout<<"1.sum 2.sub 3.mul 4.div 5.mod"<<endl;
	cin>>ch;
	switch(ch){
		case 1:sum=x+y;
			cout<<"sum="<<sum<<endl;
			break;
		case 2:sub=x-y;
			cout<<"sub="<<sub<<endl;
			break;
		case 3:mul=x*y;
			cout<<"mul="<<mul<<endl;
			break;
		case 4:div=x/y;
			cout<<"div="<<div<<endl;
			break;
		case 5:mod=x%y;
			cout<<"mod="<<mod<<endl;
			break;
		default:cout<<"wrong choice"<<endl;
			break;

	}
	return 0;
}
