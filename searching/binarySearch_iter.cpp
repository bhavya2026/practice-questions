#include<iostream>
using namespace std;
int binary_search(int *arr,int start,int end,int key){

    while(start<=end){

        int mid=(start+end)/2;
        if(arr[mid]==key)
            return mid;
        if(arr[mid]<key)
            start=mid+1;
        else
            end=mid-1;
    }
    return -1;
}
int main(){

    int size,val;

    cout<<"enter the array size";

    cin>>size;

    int arr[size];

    cout<<"enter the array element";

    for(int i=0;i<size;i++)

        cin>>arr[i];

    cout<<"enter the element you want to search in the array";

    cin>>val;

    int value=binary_search(arr,0,size,val);

    if(value==-1)

        cout<<"element not found";
    
    else

        cout<<"element found at position  "<<value+1;

    return 0; 
}