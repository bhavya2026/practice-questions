#include<iostream>
using namespace std;
bool PairSum(int *,int,int);
int main(){
    int size,num;
    cout<<"enter the size of the array";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"enter the element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"enter the number ";
    cin>>num;
    if(PairSum(arr,size,num)){
        cout<<"yes";
    }
    else
        cout<<"no";
    return 0;
}
bool PairSum(int *arr,int size,int key){
    int low=0,high=size-1,flag=0;
    while(low<=high){
        if(arr[low]+arr[high]==key)
            return true;
        else if(arr[low]+arr[high]< key)
            low++;
        else 
            high--;
    }
    return false;
}