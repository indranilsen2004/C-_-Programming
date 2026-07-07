// ********Idea***********
// If every pair matches, the array is a palindrome. Otherwise, it is not.
// ********Example*********
// Array: {1, 2, 3, 4, 3, 2, 1}
// Compare:
// 1 with 1
// 2 with 2
// 3 with 3
// All match, so it is a palindrome.
#include <iostream>
using namespace std;
bool isPalindrome(int arr[], int n) {
    for(int i = 0; i < n / 2; i++) {
        if(arr[i] != arr[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    if(isPalindrome(arr, n)) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }

    return 0;
}