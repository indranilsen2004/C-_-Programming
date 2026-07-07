#include<iostream>
using namespace std;
int main(){
    int arr[5] ={4,1,2,3,8}; //declaration & initialization
    //OUTPUT 
    for(int i=4;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}

//int a (25);---> WRONG    int a [25];--->CORRECT
//int size= 10,b[size];  --->CORRECT
//int c = {0,1,2}--->WRONG   int c[3] = {0,1,2} ----> CORRECT
//Which Element of array does this expression reference? => num[4](5 th element from start & 4 th index element)
