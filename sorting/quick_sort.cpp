//wap to implement quick sort
#include<iostream>
using namespace std;
void swap(int *,int *);
void quick(int *,int,int);
int partition(int *,int ,int);
int main(){
    int size;
    cout<<"\nenter the size of the array";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"enter the element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"\noriginal array : \n";
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"  ";
    quick(arr,0,size);
    cout<<"\nsorted array : \n";
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"  ";
    return 0;
}
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int *arr,int low,int high){

    int pivot=arr[high-1];
    int i=low-1,j=low;
    for( ;j<high-1;j++){
        if( arr[j] < pivot ){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[high-1]);
    return i;
}

void quick(int *arr,int low,int high){
    begin:
        if(low<high){
            int p=partition(arr,low,high);
            quick(arr,low,p);
            low=p+1;
            goto begin;
        }
}