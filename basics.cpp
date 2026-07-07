// What & Why ?
// To Tackle Repitation
// There are certain piece of code we use a lot of times in problems
#include<iostream>
using namespace std;
void greet(){
    cout<<"Good Morning"<<endl;
    cout<<"How are you?"<<endl;
}
int main(){
    greet();
    cout<<"Hey"<<endl;
    greet();
}