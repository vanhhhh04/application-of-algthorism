#include <iostream>
using namespace std;
void show(int *x,int n){
	for(int i=1;i<=n;i++){
		cout<<x[i]<<" ";
	};
	cout<<endl;
} ;
void Try(int k,int n,int *x,bool *dd){
	for(int i=1;i<=n;i++){
		if(dd[i] == false){
			x[k] = i;
			if(k ==n){
				show(x,n);
			}
			else{
				dd[i]=true;
				Try(k+1,n,x,dd);
				dd[i]=false;
			}
		}
	}
}
int main(){
	int n = 5;
	int *x = new int[n+1];
	bool *dd = new bool[n+1];
	for(int i=1;i<=n;i++){
		dd[i] = false;
	}
	Try(1,n,x,dd);
}
