#include<iostream>
using namespace std;
void chuyen(string a,string c)
{
	cout<<"chuyen 1 coc tu "<<a<<"sang"<<c<<endl;
}
void thaphn(int n,string a,string b,string c){
	if(n == 1){
		cout<<"chuyen 1 coc tu "<<a<<"sang"<<c<<endl;
	}
	else {
		thaphn(n-1,a,c,b);
		chuyen(a,c);
		thaphn(n-1,b,a,c);
	} 
}
int main(){
	int n = 3; 
	string a="a";
	string b="b";
	string c="c";
	thaphn(n,a,b,c);
}
