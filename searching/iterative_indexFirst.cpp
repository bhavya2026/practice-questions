#include<iostream>
using namespace std;
int index_first(int *arr,int low,int high,int key){
    if(low<high){
        int mid=(low+high)/2;
        if(arr[mid]>key)
            high=mid-1;
        else 
        if(arr[mid]<key)
            low=mid+1;
        else if(mid==0 || arr[mid-1] != arr[mid] )
            return mid;
        else
            high=mid-1;
    }
    return -1;
}
int main(){
    int size,key;
    cout<<"enter the size of an array";
    cin>>size;
    int arr[size];
    cout<<"enter the array elements";
    for(int i=0; i<size ; i++)
        cin>>arr[i];
    cout<<"enter the leement to be search";
    cin>>key;
    cout<<"the element present first tym at index "<<index_first(arr,0,size-1,key)+1;
}