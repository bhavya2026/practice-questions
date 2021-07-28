#include<iostream>
using namespace std;
int peak(int arr[],int size){
    int low=0,high=size-1,mid;

    if(size==1)
        cout<<arr[0];
    
    while(low<=high){

        int mid=(low+high)/2;

        if((mid==0 || arr[mid]!=arr[mid-1] )&&(mid=size-1 || arr[mid]!=arr[mid+1]))
            cout<< arr[mid]<<" ";
    }
}
int main(){
    int size;
    cout<<"enter the size of the array";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"enter the element "<<i+1<<": ";
        cin>>arr[i];
    }
    peak(arr,size);
}