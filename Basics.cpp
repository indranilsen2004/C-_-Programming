// ************What And Why?*************
// So far we have explored arrays with only one dimension.It is also possible for arrays to have two or more dimensions.The two dimensional array is also called a matrix.
// int arr[r][c];
// This is a 2D Array where r depicts number of rows in matrix and c depicts number of columns in the matrix.
// 2D ARRay is Array of Array
#include<iostream>
using namespace std;
int main(){
    int arr[2][3];
    arr[0][0] = 6;
    arr[0][1] = 1;
    arr[0][2] = 2;
    arr[1][0] = 4;
    arr[1][1] = 3;
    arr[1][2] = 5;
    for(int i=0;i<2;i++){   //rows
        for(int j=0;j<3;j++){    //columns
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
}
