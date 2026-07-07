#include <iostream>
using namespace std;

int main() {
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int l1 = 0, r1 = 1;
    int l2 = 2, r2 = 2;

    int sum = 0;

    for(int i = l1; i <= l2; i++) {
        for(int j = r1; j <= r2; j++) {
            sum += a[i][j];
        }
    }

    cout << "Sum of rectangle = " << sum;

    return 0;
}