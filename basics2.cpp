#include<iostream>
using namespace std;
void usa(){
    cout<<"You are in USA"<<endl;
    return; // return lagate hi function khatam ho jaata hai
    cout<<"You are in USA"<<endl;
}
void india(){
    cout<<"You are in India"<<endl;
}
int main(){
    usa();
    cout<<"You are in main"<<endl;
    india();
}

//main() ==> it can not be called more than once;kind of like break
// return; ==>

//*** main() ek hi baar aata hai */
//***Starts with main */
//***Unlimited functions */