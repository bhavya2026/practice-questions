#include<iostream>
using namespace std;
void leaders(int [],int );
int main(){
    int size;
    cout<<"enter size";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
        cin>>arr[i];
    leaders(arr,size);
    return 0;
}
void leaders(int arr[],int size){
    int j;
    for(int i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]<=arr[j])
                break;
        }
        if(j==size){
            cout<<arr[i]<<"  ";
        }
    }

}