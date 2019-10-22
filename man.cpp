#include<iostream>
#include<iomanip>
using namespace std;
main(){	
	bool b = true;
	int n = 70;
	float a = 12.4567891023;
	double c = 2006.0;
	int d = -77;
	int e=70;
	float f = 212.000;
	char g;
	cout<<boolalpha<<b<<endl;
//	cout<<noboolalpha<<b<<endl;
//	cout<<setprecision(4)<<fixed<<a<<endl;
//	cout<<setprecision(3)<<scientific<<a<<endl;
	cout<<setw(5)<<left<<d<<endl;
	cout<<setw(5)<<right<<d<<endl;
	cout<<setw(5)<<internal<<d<<endl;
	cout<<showpos<<e<<endl;
	cout<<showpoint<<f<<endl;
	cout<<setw(5)<<noshowpos<<setfill('*')<<122<<endl;
}

