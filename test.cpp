#include<iostream>
using namespace std;
int remove_dups(int *,int );
int main(){
    int size;
    cout<<"enter size \n";
    cin>>size;
    int arr[size];
    cout<<"enter elements\n";
    for(int i=0;i<size;i++)
        cin>>arr[i];
    cout<<"original array\n";
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"  ";
    int k=remove_dups(arr,size);
    cout<<"new array\n";
    for(int i=0;i<=k; i++)
        cout<<arr[i]<<"  ";
    return 0;
}
int remove_dups(int *arr,int size){
    int i=0,j=0;
    while(j<size){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
        j++;
    }
    return i;
}