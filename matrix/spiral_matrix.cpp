//print matrix in spiral form
#include<iostream>
using namespace std;
const int row=4;
const int size=3;
void spiralMat(int [][size]);
int main(){
    int mat[row][size];
    for(int i=0;i<row;i++){
        for(int j=0;j<size;j++){
            cout<<"enter the element "<<j+1<<" of row "<<i+1<<" : ";
            cin>>mat[i][j];           
        }
    }
    spiralMat(mat);
    return 0;
}
void spiralMat(int mat[row][size])
{

    int top=0,left=0,bottom=row-1,right=size-1;

    while(top<=bottom && left<=right){

        for(int i=top;i<=right;i++)
        cout<<mat[top][i]<<"  ";
        top++;
        for(int i=top;i<=bottom;i++)
            cout<<mat[i][right]<<" ";
        right--;
        if(top <=bottom){
            for(int i=right;i>=left;i--)
            cout<<mat[bottom][i]<<"  ";
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--)
            cout<<mat[i][left]<<" ";
            left++;
        }
        
    }   
}