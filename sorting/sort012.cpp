//wap to sort an array of 0,1,2 in O(N) time
#include<iostream>
using namespace std;
void swap(int *,int *);
void sort012(int *,int);
int main(){
    int size;
    cout<<"\nenter the size of the array";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"enter the value "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"\noriginal array ";
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"  ";
    sort012(arr,size);
    cout<<"\nsorted array ";
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"  ";
    return 0;
}
void sort012(int *arr,int size){
    int j;
    j=-1;
    for(int i=0;i<size;i++){
        if(arr[i]==0)
        {
            j++;
            swap(arr[i],arr[j]);
        }
    }
    j=size;
    for(int i=size-1;i>=0;i--){
        if(arr[i]==2)
        {
            j--;
            swap(arr[i],arr[j]);
        }
    }
}
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}