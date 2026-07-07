#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        
        // If row is odd → print numbers
        if (i % 2 != 0) {
            for (int j = 1; j <= i; j++) {
                cout << j << " ";
            }
        }
        // If row is even → print alphabets
        else {
            for (int j = 0; j < i; j++) {
                cout << char('A' + j) << " ";
            }
        }

        cout << endl;
    }

}