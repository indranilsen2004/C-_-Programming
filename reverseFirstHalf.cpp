#include<iostream>
using namespace std;
int main(){ 
    string s = "Raghav";
    cout<<s<<endl;
    int n = s.length(); // n = 6
    //reverse string
    int i = 0;
    int j = n/2 -1;
    while(i<j){
        char temp = s[i];
        s[i]=s[j];
        s[j]= temp;
        i++;
        j--;
    }
    cout<<s<<endl;
}
