#include<iostream>
using namespace std;
void display(int *mat,int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<mat[i][j]<<" ";
        }
    }
}
int main(){
    int row,col;
    cout<<"enter the row and column";
    cin>>row>>col;
    int mat[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"enter the element "<<i<<" "<<j<<" :";
            cin>>mat[i][j];
        }
    }
    display((int *)mat,row,col);
    return 0;
}
