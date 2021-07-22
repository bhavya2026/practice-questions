#include<iostream>
using namespace std;
int first_occur(int *arr,int low,int high,int key){
    if(low<high){
        int mid=(low+high)/2;
        if(arr[mid]>key)
            first_occur(arr,low,mid-1,key);
        else if(arr[mid]<key)
            first_occur(arr,mid+1,high,key);
        else
        if(mid==0 || arr[mid-1]!=arr[mid])
            return mid;
        else 
            return first_occur(arr,low,mid-1,key);
    }
    else 
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

    int value=first_occur(arr,0,size,val);

    if(value==-1)

        cout<<"element not found";
    
    else

        cout<<"element found at position  "<<value+1;

    return 0; 

}