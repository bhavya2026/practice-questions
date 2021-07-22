#include<iostream>
using namespace std;
int cons1(int [],int);
int main(){
    int size;
    cout<<"enter size";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
        cin>>arr[i];
    cout<<"the number of comsecutive one's are :"<< cons1(arr,size);
    return 0;
}
int cons1(int arr[],int size){

    int key[size]={0}, j=0,  count=0;

    for(int i=0;i<size;i++){
        if (arr[i]==1)
            count++;
        
        if((arr[i]==0 && i!=0 )||(i==size-1)){
            key[j]=count;
            j++;
            count=0;
        }
            
    }
    int max_count=key[0];
    for(int i=0;i<j;i++){
        if(max_count<key[i])
            max_count=key[i];
    }
    return max_count;
}
