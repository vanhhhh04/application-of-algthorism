#include <bits/stdc++.h>
using namespace std;

void show(int *x, int n, string ten[]) {
    for (int i = 1; i <= n; i++) {
        cout << ten[x[i]] << " ";  // Use ten[x[i]] to get the name at index x[i]
    }
    cout << endl;
}

void Try(int k, int *x, int n, bool *dd, string ten[]) {
    for (int i = 1; i < n; i++) { // Start from 0 for array indexing
        if (dd[i] == false) {
            x[k] = i;  // Store the index instead of string
            if (k == n) {
                show(x, n, ten); // Pass ten to access names
            } else {
                dd[i] = true;
                Try(k + 1, x, n, dd, ten);
                dd[i] = false;
            }
        }
    }
}

int main() {
    int n = 4; // 4 names
    bool *dd = new bool[n];
    int *x = new int[n + 1];
    string ten[4] = {"trung", "cuc", "truc", "mai"}; // 0-based index

    for (int i = 0; i < n; i++) {
        dd[i] = false;
    }

    Try(1, x, n, dd, ten);
    return 0;
}

