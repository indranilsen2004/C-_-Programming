#include<iostream>
using namespace std;
int main(){ 
    string s = "Indranil";
    cout<<s<<endl;
    int n = s.length();
    //reverse string
    int i = 0;
    int j = n-1;
    while(i<j){
        int temp = s[i];
        s[i]=s[j];
        s[j]= temp;
        i++;
        j--;
    }
    cout<<s<<endl;
}
