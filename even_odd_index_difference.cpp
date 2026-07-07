#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int evenSum = 0, oddSum = 0;

    for(int i = 0; i < size; i++) {
        if(i % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }
    int difference = evenSum - oddSum;
    cout << difference;
    return 0;
}