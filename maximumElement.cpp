#include <iostream>
using namespace std;

int main() {
    int arr[2][3] = {{9, 4, 2}, {0, 1, 7}};
    
    int maxElement = arr[0][0];  // assume first element is max

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            if(arr[i][j] > maxElement) {
                maxElement = arr[i][j];
            }
        }
    }

    cout << "Maximum element is: " << maxElement;

    return 0;
}