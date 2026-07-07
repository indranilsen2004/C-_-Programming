#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string : ";
    getline(cin,s); //output pr sentence likha toh gap ke saath print karne ke liye getline use hota hai
    cout<<s;
}