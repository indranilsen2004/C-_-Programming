#include <iostream>
using namespace std;

int main() {
    int n, m;

    cout << "Enter rows and columns: ";
    cin >> n >> m;

    int a[100][100];

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    cout << "\nTranspose of matrix:\n";

    // Column wise printing (transpose)
    for(int j = 0; j < m; j++) {
        for(int i = 0; i < n; i++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}