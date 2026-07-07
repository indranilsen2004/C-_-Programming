//**************************************FIBONACCI NUMBER SERIES*************************************************/
// 0 1  1  2  3  5  8  13  21  34  55  89...........//
//n= 1  2  3  4  5  6  7   8   9   10  11...........//(0+1=1)(1+1=2)(1+2=3)(2+3=5)(3+5=8)(8+5=13)(13+8=21)(21+34=55)
// fibo(8)= fibo(7)+fibo(6)//
// fibo(n)= fibo(n-1)+fibo(n-2)//
// fibo(1)=1,fibo(2)=1,
#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<fibo(n);
}