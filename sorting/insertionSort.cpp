//wap to implement insertion sort algorithm
#include<iostream>
using namespace std;
void insertion_sort(int *,int);
int main(){
    int size;
    cout<<"\n\nenter the size of the array : ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"\nenter the element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"\noriginial array : ";
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"  ";
    insertion_sort(arr,size);
    cout<<"\nsorted array : ";
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"  ";
    return 0;
}
void insertion_sort(int *arr,int size){
    int key;
    for(int i=0;i<size;i++){
        key=arr[i];
        int  j=i-1;
        while( j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}