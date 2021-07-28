#include<iostream>
using namespace std;
#define row 4
#define col 3
void snake(int mat[row][col]){

    for(int i = 0 ;i < row ; i++ ){

        if( i % 2 == 0){

            for(int j = 0 ; j < col ;j++){
                
                cout<< mat[i][j]<<"  ";
            }
        }
        else
            for( int j = col - 1 ; j >= 0 ; j--)
                cout<< mat[i][j]<<"  ";
    }
}
int main(){

    int mat[row][col];

    for( int i = 0 ; i < row ; i++ ){

        for( int j = 0 ; j < col ; j++ ){

            cout<<"enter the element "<<j<<" of row "<<i<<":  ";

            cin>>mat[i][j];

        }
    }
    snake(mat);
return 0;
}