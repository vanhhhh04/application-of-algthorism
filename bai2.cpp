#include<iostream>
using namespace std;

void show(int *x, int n, string ten[]) {
    for (int i = 1; i < n; i++) {
        cout << ten[x[i] - 1] << " ";  // Adjusting index to match 0-based indexing for `ten`
    }
    cout << endl;
}

void Try(int k, int *x, int n, bool *dd, string ten[]) {
    for (int i = 1; i <= n; i++) {
        if (!dd[i]) {
            x[k] = i;
            if (k == n) {
                show(x, n, ten);
            } else {
                dd[i] = true;
                Try(k + 1, x, n, dd, ten);
                dd[i] = false;
            }
        }
    }
}

int main() {
    int n = 7;
    int *x = new int[n + 1];
    bool *dd = new bool[n + 1];
    for (int i = 1; i <= n; i++) {
        dd[i] = false;
    }
    string ten[7] = {"A", "B", "C", "D", "E", "F", "G"};

    Try(1, x, n, dd, ten);

    delete[] x;
    delete[] dd;
    return 0;
}

