#include<iostream>
using namespace std;
void reverseArray(int arr[],int size){

    int i=0,j=size-1,temp=0;

    for( ;i<size/2;i++){
        
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
        
    }
    for(int k=0;k<size;k++){
        cout<<arr[k]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr,size);
    return 0;
}
