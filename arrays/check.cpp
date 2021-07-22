#include<iostream>
using namespace std;
int maxSubarraysum(int [],int );
int main(){
    int size;
    cout<<"enter size";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
        cin>>arr[i];
    cout<<"max sum is  :"<<maxSubarraysum(arr,size);
    return 0;
}
int maxSubarraysum(int arr[],int size){
    int max_ending_here=0;
    int max_so_far=INT_MIN;
    for(int i=0;i<size;i++){
        max_ending_here+=arr[i];
        if(max_ending_here<arr[i])
            max_ending_here=arr[i];
        if(max_so_far<max_ending_here)
            max_so_far=max_ending_here;
    }
    return max_so_far;
}