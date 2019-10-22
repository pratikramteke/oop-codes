#include<iostream>
using namespace std;
class gfather{
	int height;
	public:
		void setheight(int h){
			height=h;
		}	
		int getheight(){
			return height;
		}
};
class father:public gfather{
	string eyecolor;
	public:
		void seteyecolor(string e){
			eyecolor=e;
		}
		string geteyecolor(){
			return eyecolor;
		}
};
class mother{
	string hairtype;	
	public:
		void sethairtype(string ht){
			hairtype=ht;
		}
		string gethairtype(){
			return hairtype;
		}
};
class son:public father,public mother{
	public:
		void display(){
			cout<<"i am little one "<<endl;
		}
};
int main(){
	son s;
	s.display();
	s.setheight(174);
	s.seteyecolor("brown");
	s.sethairtype("curly");
	cout<<"My height is "<<s.getheight()<<endl;
	cout<<"my eyecolor is "<<s.geteyecolor()<<endl;
	cout<<"my hairtype is "<<s.gethairtype()<<endl;
	return 0;
}
