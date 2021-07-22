#include<iostream>
using namespace std;
int max_sumSubarray(int [],int);
int main(){
    int s;
    cout<<"enter array size";
    cin>>s;
    int arr[s];
    cout<<"enter array elements";
    for(int i=0;i<s;i++)
        cin>>arr[i];
    cout<<"max sum of subarray"<<max_sumSubarray(arr,s);

}
int max_sumSubarray(int arr[],int size){
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