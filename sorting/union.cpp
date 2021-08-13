//wap to perform the union of two array
#include<iostream>
using namespace std;
void array_union(int *,int *,int,int);
int main(){
    int size1,size2;
    cout<<"\nenter the size of array 1 ";
    cin>>size1;
    int arr[size1];
    for(int i=0;i<size1;i++){
        cout<<"\nenter the element "<<i+1<<" : "  ;
        cin>>arr[i];
    }
    cout<<"\nenter the size of array 2 ";
    cin>>size2;
    int brr[size2];
    for(int i=0;i<size2;i++){
        cout<<"\nenter the element "<<i+1<<" : "  ;
        cin>>brr[i];
    }
    array_union(arr,brr,size1,size2);
    return 0;
}
void array_union(int *a,int *b,int m,int n){
    int i=0,j=0;

    while(i<m && j<n){

        if(i>0 && a[i]==a[i-1]){
            i++;
            continue;
        }
        if(j>0 && b[j]==b[j-1]){
            j++;
            continue;
        }
        if(a[i]<b[j])
        {
            cout<<a[i]<<"  ";
            i++;
        }
        else if(a[i]>b[j])
        {
            cout<<b[j]<<"  ";
            j++;
        }
        else{
            cout<< a[i]<<"  ";
            i++;j++;
        }
    }
    while(i<m){
        if(i>0 && a[i]!=a[i-1]){
            cout<<a[i]<<"  ";
            i++;
        }

    }
    while(j<n){
        if(j>0 && b[j]!=b[j-1]){
        cout<<b[j]<<"  ";
        j++;
        }
    }
}