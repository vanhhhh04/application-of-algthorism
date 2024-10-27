#include<iostream>
using namespace std ;
int luythua(int b,int k)
{
	if (k == 0)
		return 1; 
	else 
		return b * luythua(b,k-1);
 } ;
int main()
{
	int b = 2 ;
	int k = 3 ;
	cout << luythua(b,k);
}
