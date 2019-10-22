#include<iostream>
#include<string.h>
using namespace std;
class person{
	string *name;
	int *age;
	public:
		person(string n,int a){
			name=new string(n);
			age=new int(a);
		}
		void changenameage(string n,int a){
			*name=n;
			*age=a;
		}
		void introduce(){
			cout<<"name="<<*name<<" age="<<*age<<endl;
		}
};
int main(){
	person anil("anil",23);
	anil.introduce();
	//anil.changenameage("anil kapoor",50);
	//anil.introduce();
	person dupanil=anil;
	anil.changenameage("anil kapoor",52);
	anil.introduce();
	dupanil.introduce();
	return 0;
}
