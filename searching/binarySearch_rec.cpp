//wap to implement binary search
//*********************RECURSIVE APPROACH****************************

#include<iostream>

using namespace std;

int binarySearch(int *arr,int start,int end,int key)

{

    if(start>end)
        return -1;
    
        int mid=(start+end)/2;

        if(key==arr[mid])

            return mid;

        if(key<arr[mid])

            binarySearch(arr,0,mid-1,key);

        else

            binarySearch(arr,mid+1,end,key);
    
    
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

    int value=binarySearch(arr,0,size,val);

    if(value==-1)

        cout<<"element not found";
    
    else

        cout<<"element found at position  "<<value+1;

    return 0; 
}