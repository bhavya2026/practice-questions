//implement lomuto partition algorithm
#include<iostream>
using namespace std;
void swap(int*,int*);
void lomuto_partition(int *,int);
int main(){
    int size;
    cout<<"enter the size of the array ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"\nenter the size of the array  : ";
        cin>>arr[i];
    }
    cout<<"\noriginal array : ";
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    lomuto_partition(arr,size);
    cout<<"\npartitioned array : ";
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
}
void lomuto_partition(int *arr,int size){
    int low=0,high=size-1,i=low-1;
    int pivot=arr[high-1];
    for(int j=low;j<=high-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);

}
void swap(int *a,int *b){
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}