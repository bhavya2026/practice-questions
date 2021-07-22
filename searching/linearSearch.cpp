//implement linear search algorithm
//takes O(n) time complexity,O(1) auxillary space
#include<iostream>
using namespace std;
int LinearSearch(int [],int,int);
int main(){
    int size,val;
    cout<<"enter the array size";
    cin>>size;
    int arr[size];
    cout<<"enter the array element";
    for(int i=0;i<size;i++)
        cin>>arr[i];
    cout<<"enter the element you want to search in the array";
    cin>>val;
    cout<<"element found at position "<<LinearSearch(arr,size,val)+1;
    return 0;
}
int LinearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++)
        if(arr[i]==key)
            return i;
}