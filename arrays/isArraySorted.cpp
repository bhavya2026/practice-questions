#include<iostream>
using namespace std;
bool isArraySorted(int arr[],int size){
    if(size==1 || size==0)
        return true;
    for(int i=1;i<size;i++){
        
        if(arr[i-1]>arr[i])
            return false;
    }
    return true;
}
int main(){

    int arr[]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    if(isArraySorted(arr,size))
        cout<<"sorted array";
    else
        cout<<"not a sorted array";
    return 0;
}