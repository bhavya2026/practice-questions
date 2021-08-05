//wap to transpose a matrix
#include<iostream>
using namespace std;
const int size=3;
void swap(int, int);
void transpose(int [][size]);
int main(){

    int mat[size][size];//declaring matrix
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<"enter the element "<<j+1<<" of row "<<i+1<<": ";
            cin>>mat[i][j];
        }
    }
    transpose(mat);
    return 0;
 }
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void transpose(int mat[][size]){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){

            swap(&mat[i][j],&mat[j][i]);
        }
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<mat[i][j]<<"  ";
        }
    }
}