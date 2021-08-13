//write an efficient program to find the median in the unsorted array
#include<iostream>
using namespace std;
void swap(int *,int *);
int partition(int *,int ,int);
int quick(int *,int ,int,int);
int main(){
    cout<<"\n\n\t***********  MEDIAN IN A LIST *************\n";
    int tests,size,index;
    do{
        cout<<"how many elements you want to enter ";
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++){
            cout<<"enter the element "<<i+1<<" : ";
            cin>>arr[i];
        }
        if(size%2==0){
            index=(size/2 + size/2 -1)/2;
        }
        else
            index=size/2;
        cout<< "the median element is "<<arr[quick(arr,0,size,index)];
        
        cout<<"\n press 1 to continue and press 0 to stop ";
        cin>>tests;       
    }
    while(tests);
    if(!tests)
        cout<<"***************** THANKYOU**********************\n\n";
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
    for(;j<high-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    i++;
    swap(&arr[i],&arr[high-1]);
    return i;
}
int quick(int *arr,int low,int high,int index){
    int p;
    if(low<=high){
        p=partition(arr,low,high);
        if(p==index)
            return p;
        if(p>index)
            quick(arr,low,p,index);
        else
            quick(arr,p+1,high,index);
    }
}