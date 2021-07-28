//print the matrix boundary elements
#include<iostream>
#define row 4
#define col 3
using namespace std;

void boundaryElement(int mat[row][col])
{
    cout<<"boundary elements are : \n";
    for(int j=0; j < col ; j++)

        cout<<mat[0][j]<<"  ";

    for(int i=1;i<row;i++)

        cout<<mat[i][col-1]<<"  ";

    for(int j=col-2;j>=0;j--)

        cout<<mat[row-1][j]<<"  ";

    for(int i=row-2;i>0;i--)

        cout<<mat[i][0]<<"  ";
}

int main(){
    int mat[row][col];
    //cout<<"enter the matrix element \n"; 
    for(int i=0;i<row;i++){

        for(int j=0;j<col;j++){
            cout<<"enter the element "<<j<<" of row "<<i<<" : ";
            cin>>mat[i][j];
        }
    }
    cout<<"original matrix is:\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
    boundaryElement(mat);

}