#include<iostream>
using namespace std;
int maxprofit(int arr[],int size){
    int profit=0;
    for(int i=1;i<size;i++)
        if(arr[i]>arr[i-1])
            profit+=arr[i]-arr[i-1];
    return profit;
}
int main(){
    int stop;
    do{
        int size;
        cout<<"enter size";
        cin>>size;
        int arr[size];
        cout<<"enter the array elements";
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        cout<<"the max profit is:  "<<maxprofit(arr,size);
        cout<<"\n tpress any key to continue.press 0 to stop";
        cin>>stop;
    }
    while(stop);
    return 0;
}