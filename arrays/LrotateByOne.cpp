#include<iostream>
using namespace std;
void lRotatebyOne(int arr[],int size){
    int first=arr[0];
    for(int i=1;i<size;i++){
        arr[i-1]=arr[i];
    }
    arr[size-1]=first;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
    
}
int main(){
    int size;
    cout<<"enter the size of an array";
    cin>>size;
    int arr[size];
    cout<<"enter the array elements";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    lRotatebyOne(arr,size);
    return 0;
}