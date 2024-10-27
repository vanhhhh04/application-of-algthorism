#include <iostream>
using namespace std;

struct ChuyenBay {
    string sohieu;     // Flight number
    int giave;         // Ticket price
    int soghengoi;     // Number of seats
};

// A1 function to display flights with ticket prices above 700,000
void A1(ChuyenBay *a, int index, int n) {
    if (index >= n) {
        return; // Base case: if index is out of bounds, return
    } else {
        // Check if the ticket price is greater than 700,000
        if (a[index].giave > 700000) {
            cout << "Chuyen bay: " << a[index].sohieu 
                 << ", Gia ve: " << a[index].giave 
                 << ", So ghe: " << a[index].soghengoi << endl;
        }
        // Recursive call for the next flight
        A1(a, index + 1, n);
    }
}
ChuyenBay A2(ChuyenBay *a, int left, int right)
{
	if(left <= right){
		return a[left];
	} 
	int mid = left+right / 2 ;
	ChuyenBay leftMin = A2(a,left,mid);
	ChuyenBay rightMin = A2(a,mid+1,right);
	return (leftMin.giave < rightMin.giave)? leftMin : rightMin; 
	
} 
void show(ChuyenBay *a,int m,int *x){
	for(int i=1;i<=m;i++)
	{
		cout<<a[x[i]-1].sohieu<<" ";
	}
	cout<<endl;
}
void Try(int k,int *x,int m,int n,bool *dd,ChuyenBay *a){
	int last_element = x[k-1];
	for(int i = last_element + 1 ; i<=n; i++){
		if(dd[i] == false){
			x[k] = i ;
			if(k == m) show(a,m,x);
			else{
			dd[i] = true;
			Try(k+1,x,m,n,dd,a);
			dd[i]= false;
			}
		}
	}
}


int main() {
    // Sample flight data
    ChuyenBay chuyenbay[] = {
        {"VN001", 800000, 150},
        {"VN002", 750000, 120},
        {"VN003", 600000, 200},
        {"VN004", 850000, 180},
        {"VN005", 700000, 160},
        {"VN006", 650000, 130},
        {"VN007", 900000, 155},
        {"VN008", 500000, 140},
        {"VN009", 820000, 175},
        {"VN010", 680000, 200}
    };
    int n = 10;
    int m = 4;
    int *x = new int[m+1];
	bool *dd = new bool[m+1];
	for(int i=0;i<n+1;i++){
		dd[i] = false;
		x[i] = 0;
	}
	Try(1,x,m,n,dd,chuyenbay);


    return 0;
}
