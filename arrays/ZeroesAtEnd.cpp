#include<iostream>
using namespace std;
//*******************************************NAIVE SOL.*************************************8
// void zeroatend(int *arr,int size){
//     int temp[size]={0};
//     int res=1;
//     for(int i=0;i<size;i++){
//         if(arr[i]){
//             temp[res-1]=arr[i];
//             res++;
//         }
//     }
//     for(int i=0;i<size;i++){
//         arr[i]=temp[i];
//         cout<<arr[i]<<"  ";
//     }
// }
// int main(){
//     int size;
//     cout<<"enter the size of the array";
//     cin>>size;
//     int a[size];
//     cout<<"enter the array elements";
//     for(int i=0;i<size;i++){
//         cin>>a[i];
//     }
//     zeroatend(a,size);
//     return 0;
// }
void movezeroes(int arr[],int size){
    int temp,count=0;
    for(int i=0;i<size;i++){
        if(arr[i]){
            temp=arr[i];
            arr[i]=arr[count];
            arr[count]=temp;
            count++;
        }
    }
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<"  ";
        }
    
}
int main(){
    int size;
    cout<<"enter the size of an array";
    cin>>size;
    int arr[size];
    cout<<"enter the array elements";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    movezeroes(arr,size);
    return 0;
}