#include<iostream>
using namespace std;
int median(int arr[],int brr[],int size){
    int k=0,l=0,total=2*size;
    int merge[total];
    for(int i=0;i<total;i++){
        if(arr[k]<brr[l]){
            merge[i]=arr[k];
            k++;
        }
        else{
            merge[i]=brr[l];
            l++;
        }
    }
    for(int i=0;i<total;i++)
        cout<<merge[i]<<"    ";
    
    return (merge[(total-1)/2]+merge[((total-1)/2)+1])/2;
    
}
int main(){
    int size;
    cout<<"enter size";
    cin>>size;
    int a[size],b[size];
    cout<<"enter the elements of array 1";
    for (int i = 0; i < size; i++)
    {
        cin>>a[i];
    }
    cout<<"enter the elements of array 2";
    for (int i = 0; i < size; i++)
    {
        cin>>b[i];
    }
    cout<<"\n"<<median(a,b,size);
    return 0;
}