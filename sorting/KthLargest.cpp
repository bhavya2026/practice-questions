//wap to find the Kth smallest element in the array
#include<iostream>
using namespace std;
void swap(int *,int *);
int partition(int *,int,int);
int KthSmallest(int *,int,int,int );
int main(){
    int test,size,k;
    do{
        cout<<"enter the size";
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++){
            cout<<"enter the element "<<i+1<<" : ";
            cin>>arr[i];
        }
        // cout<<"original array \n";
        // for(int i=0;i<size;i++)
        //     cout<<arr[i];
        cout<<"enter the kth smallest value you want to search";
        cin>>k;
        cout<<"the kth smallest element is : " <<KthSmallest(arr,0,size,k);
        cout<<"\npress 1 to continue ,press 0 to stop";
        cin>>test;
    }
    while(test);
}
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int *arr,int low,int high){

    int i=low-1,j=low,pivot=arr[high-1];
    for( ; j<high-1;j++){
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    i++;
    swap(&arr[i],&arr[high-1]);
    return i;
}
int KthSmallest(int *arr,int low,int high,int k){
    if(k>high)
        return -1;
    if(low<high){
        int p=partition(arr,low,high);
        if(p==k-1)
            return arr[p];
        else if(p>k-1)
            KthSmallest(arr,low,p,k);
        else
            KthSmallest(arr,p+1,high,k);
    }
    
}