//wap to implement selection sort
#include<iostream>
using namespace std;
void selection_sort(int *,int );
void swap(int *,int *);
int main(){
    int size;
    cout<<"\nenter the size of the array : ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"enter the element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"\n\noriginal array : \n";
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"  ";
    selection_sort(arr,size);
    cout<<"\n\nsorted array : \n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}
void swap(int *a,int *b){
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}
void selection_sort(int *arr,int size){
    
    int min=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size-1;j++){
            if(arr[i]>arr[j]){
                min=j;
                swap(&arr[min],&arr[i]);
            }
        }  
    }
}