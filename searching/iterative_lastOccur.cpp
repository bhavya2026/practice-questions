#include<iostream>
using namespace std;
int last_occur(int *arr,int size,int key){
    int low=0,high=size-1;
    while(low<=high){

        int mid=(low+high)/2;
        if(arr[mid]<key)
            low=mid+1;
        else if(arr[mid]>key)
            high=mid-1;
        else if(mid==size-1 || arr[mid]!=arr[mid+1])
            return mid;
        else low=mid+1;
    }
    return -1;
}
int main(){
     int size,val,value;

    cout<<"enter the array size";

    cin>>size;

    int arr[size];

    cout<<"enter the array element";

    for(int i=0;i<size;i++)

        cin>>arr[i];

    cout<<"enter the element you want to search in the array";

    cin>>val;

    value=last_occur(arr,size,val);

    if(value==-1)

        cout<<"element not found";
    
    else

        cout<<"element found at position  "<<value+1;

    return 0; 
}