#include<iostream>
#include<climits> // ***********IMP LINE**************
using namespace std;
int main(){
    int arr[] = {-10,-2,-3,-4,-5};
    int n = sizeof(arr)/4;
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
        // if(arr[i]>mx) mx = arr[i];
        mx = max(mx,arr[i]);
    }
    cout<<mx;
}

// The array int num[26] has 26 elements ---> TRUE
// The Expression num[] designates the first elements in the array ---> FALSE
// It is necessary to initialize the array at the time of declaration -->FALSE
// The expression num[27] designates the 28 element in the array--->TRUE
