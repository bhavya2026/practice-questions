#include<iostream>
using namespace std;
void rotate(int *,int,int);
void lrotatebyk(int *,int ,int);
int main(){
    int size,k;
    cout<<"enter the size of the array";
    cin>>size;
    int arr[size];
    cout<<"enter the array elements";
    for(int i=0;i<size;i++)
        cin>>arr[i];
    cout<<"how many times you want to rotate an array";
    cin>>k;
    lrotatebyk(arr,size,k%size);
    return 0;
}
void lrotatebyk(int *arr,int size,int k){
    rotate(arr,0,k-1);
    rotate(arr,k,size-1);
    rotate(arr,0,size-1);
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"  ";
}
void rotate(int *arr,int low,int high){
    int temp;
    while(low<high){
        temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}