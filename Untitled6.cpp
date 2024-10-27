#include<iostream>
using namespace std;
void show(int *x,int n){
	for(int i=1;i<=n;i++){
		cout<<x[i]<<" ";
	}
	cout<<endl;
}
void Try(int k,int n,int *x)
{
	for(int i=0;i<=1;i++){
			x[k] = i ;
			if (k==n){
				show(x,n);
			}
			else
			{	
			Try(k+1,n,x);
			}
		}
	}

int main(){
	int n = 4;	
	int *x = new int[n+1];
	Try(1,n,x);
}
