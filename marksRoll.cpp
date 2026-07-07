#include<iostream>
using namespace std;
int main(){
    int arr[4][2] ={{76,81},{13,76},{82,91},{88,90}};
    cout<<"Roll Marks\n";
    for(int i = 0;i<4;i++){
        cout<<arr[i][0]<<" "<<arr[i][1]<<endl;
    }
}