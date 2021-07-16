#include<iostream>
using namespace std;
int removeDuplicates(int arr[],int size);
int main(){
    int size;
    cout<<"enter the size";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"\nenter element "<<i+1<<"  ";
        cin>>arr[i];
    }
    int s=removeDuplicates(arr,size);
    for (int i = 0; i <s; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
int removeDuplicates(int arr[],int size){
    int result=1;
    for(int i=1;i<size;i++){
        if(arr[i]!=arr[result-1]){
            arr[result]=arr[i];
            result++;
        }
    }
    return result;
}