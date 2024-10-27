#include <iostream>
using namespace std;

struct Lop {
    string MaLop; // Mã l?p
    int Sohs;     // S? h?c sinh
    int Sohsnu;   // S? h?c sinh n?
};

int greedy(int n, Lop* lopHocPhan, int d) {
    int index = 0;
    int sum = 0;
    int minGroups = 0;

    while (index < n) {
        sum += lopHocPhan[index].Sohs;
        if (sum > d) {
            minGroups += 1;
            break; 
        }
        minGroups += 1 ; 
        index += 1;
    }

    return minGroups;
}

int main() {
    // Kh?i t?o m?ng l?p h?c ph?n theo th? t? gi?m d?n c?a s? h?c sinh n?
    Lop lopHocPhan[10] = {
        {"Lop04", 32, 16},
        {"Lop01", 30, 15},
        {"Lop07", 31, 15},
        {"Lop03", 28, 14},
        {"Lop10", 30, 14},
        {"Lop05", 29, 13},
        {"Lop06", 27, 13},
        {"Lop02", 25, 12},
        {"Lop08", 26, 12},
        {"Lop09", 24, 11}
    };

    cout << "Danh sach lop hoc phan (theo so hoc sinh nu giam dan):" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Ma Lop: " << lopHocPhan[i].MaLop
             << ", So hoc sinh: " << lopHocPhan[i].Sohs
             << ", So hoc sinh nu: " << lopHocPhan[i].Sohsnu << endl;
    }

    int minGroups = greedy(10, lopHocPhan, 35);
    cout << "Minimum groups required: " << minGroups << endl;

    return 0;
}

