#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for(int j=1;j<=i;j++){
            if((i+j)%2==0) cout<<1<<" ";
            else cout<<0<<" ";
        }
        cout << endl;
    }
}


// Q.
//    1
//    0 1
//    1 0 1
//    0 1 0 1 
//    1 0 1 0 1

// when, (i+j)%2==0  -->1
// else ---> 0
