#include<iostream>
using namespace std;
void swap(int* a, int* b){
    int temp = *a;
    *a = * b;
    *b = temp;
}
int main(){
    int x = 81;
    int y = 79;
    cout<<x<<" "<<y<<endl;
    swap(&x,&y);
    cout<<x<<" "<<y<<endl;
}
//Pass By Reference
//The Same Variable names can be used in different functions without any conflict ----TRUE
//Every calle dfunction must contain a return statement ----FALSE
//A Function may contain more than one return statements --- TRUE
//A function may be called more than once from amy other function ---TRUE