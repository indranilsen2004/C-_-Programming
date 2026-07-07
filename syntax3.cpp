#include<iostream>
using namespace std;
int main(){
    // 5 integers --> 6,2,8,5,0
    int arr[5]; // declaration
    cout<<"Enter array Elements : ";
    for(int i=0;i<=4;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
    arr[0] = 100; // update
    cout<<endl;
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
}