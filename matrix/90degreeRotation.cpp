//rotate matrix by 90 degree
#include<iostream>
using namespace std;
const int size=3;
void swap(int ,int);
void rotate90(int [][size]);
int main(){
    
    int mat[size][size];

    for( int i = 0 ; i < size ; i++ ){

        for( int j=0 ; j < size ; j++ ){

            cout<<"enter the element "<< j+1<<" of row "<<i+1<<" : ";

            cin>>mat[i][j];
        }
    }
    rotate90(mat);
}
void swap(int *a,int *b){

    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}

void  rotate90(int mat[size][size]){

    int temp=0;

    for(int i=0;i<size;i++){

        for(int j=i+1;j<size;j++){

            swap(&mat[i][j] , &mat[j][i]);

        }
    }

    for(int i=0;i<size;i++){

        int low=0,high=size-1;

        while(low<high){

            swap( &mat[low][i] , &mat[high][i] );
            high--;
            low++;
        }
    }

    for( int i =0 ; i < size ; i++ ){
        for( int j = 0; j < size ;j++){
            cout<< mat[i][j]<<"  ";
        }
    }
}
