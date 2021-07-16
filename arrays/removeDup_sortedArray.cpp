/*---------------------------------------------NAIVE SOLUTION----------------------------------------------------
#include<iostream>
using namespace std;
void removeDuplicatesInSortedArray(int arr[],int size){
    int temp[size];
    temp[0]=arr[0];
    int res=1;
    for(int i=1;i<size;i++){
        if(temp[res-1]!=arr[i]){
            temp[res]=arr[i];
            res++;
        }     
    }
    for(int i=0;i<size;i++){
        arr[i]=temp[i];
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,1,2,3,4,4,4,5,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    removeDuplicatesInSortedArray(arr,size);
    return 0;
}*/


// -----------------------------------EFFICIENT SOLUTION--------------------------------------------------------


#include<iostream>
using namespace std;
void removeDups(int arr[],int size){
    int res=1;
    for(int i=1;i<size;i++){
        if(arr[i]!=arr[res-1]){
            arr[res]=arr[i];
            res++;
        }
    }
    cout<<"\tnew array:";
    for(int i=0;i<res;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,2,3,3,4,4,4,5,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"\toriginal array:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    removeDups(arr,size);
    return 0;
}