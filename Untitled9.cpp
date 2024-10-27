#include <iostream>
using namespace std;

int max_arr(int *x, int left, int right) {
    if (left == right) { // Base case: single element
        return x[left];
    } else {
        int midd = (left + right) / 2;
        int max_left = max_arr(x, left, midd);
        int max_right = max_arr(x, midd + 1, right);

        // Return the maximum of the two halves
        if (max_left > max_right) {
            return max_left;
        } else {
            return max_right;
        }
    }
}


int main() {
    int x[6] = {5, 4, 2, 4, 7, 9};
    cout << "Maximum element: " << max_arr(x, 0, 5) << endl;
    return 0;
}

