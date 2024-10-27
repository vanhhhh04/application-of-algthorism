#include<iostream>
using namespace std;
void getmin(int *a,int k,int index,int &pivot){
	if (index < 0){
		return;
	}
	else{
		if (a[index] > k and a[index]<pivot){
			pivot = a[index];
		}
		getmin(a,k,index-1,pivot);
		
	}
};
int main()
{
	int a[] = {1,7,4,2,5,6};
	int k = 3 ;
	int pivot = 99 ;
	getmin(a,k,5,pivot);
	cout<<pivot;
}  

