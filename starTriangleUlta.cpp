#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for(int j=1;j<=n-i+1;j++){  //For j<=n-i+1 represents ulta star; j<=n represents square;j<=i represents sidha triangle
            cout<<"*";
        }
        cout << endl;
    }
}

////***i=1,j=1,2,3,4****/
////***i=2,j=1,2,3****/
////***i=3,j=1,2****/
////***i=4,j=1****/
////*******************i+jmax=n+1=>jmax=n+1-i=>j<=n+1-i*******************//