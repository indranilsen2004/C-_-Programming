#include<iostream>
#include<algorithm>
using namespace std;
int main(){ 
    string s = "Indranil";
    cout<<s<<endl;
    int n = s.length();
    reverse(s.begin(),s.begin()+3);//jitne character hume swap karke likhne hai utna hi hum + kar ke likhte hai
    cout<<s<<endl;
}
