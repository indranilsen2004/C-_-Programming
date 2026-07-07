#include<iostream>
#include<algorithm> // use this reverse all words
using namespace std;
int main(){ 
    string s = "Indranil";
    cout<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}
