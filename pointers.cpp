#include<iostream>
using namespace std;
int main(){
    int x = 3;
    int* p = &x;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<x<<endl;
    cout<<*p<<endl; // star operator
    cout<<&p<<endl;
}
// access the value of the variable whose address is in the pointer--using * operator