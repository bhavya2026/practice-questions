#include<iostream>
using namespace std;
int count1s(int *,int );
int main(){
    int size;
    cout<<"\nenter the array size";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"enter the element "<<i+1<<" : ";
        cin>>arr[i];
    }
    count1s(arr,size);
    return 0;
}
int count1s(int *arr,int size){
    int low=0,high=size-1;
    while(low<=high){

        int mid=(low+high)/2;
        if(arr[mid]==0)
            low=mid+1;
        else
            if( arr[mid] ==0 || arr[mid-1]==0)
                return (size-mid);
            else
                high=mid-1;
    }
}