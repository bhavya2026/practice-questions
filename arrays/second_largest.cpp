#include<iostream>
using namespace std;
int second_largest_element(int arr[],int size){
    int second=-1,largest=0;
    for(int i=1;i<size;i++){
        if(arr[i]>arr[largest]){
            second=largest;
            largest=i;
        }
        else if(arr[largest]!=arr[i])
        {
            if(second==-1 ||arr[second]<arr[i])
                second=i;
        }
    }
    return second;
}
int main(){
    int size;
    cout<<"\t\tenter size:\n\t\t";
    cin>>size;
    int arr[size];
    cout<<"\t\tenter the array elements:\n\t\t";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int index=second_largest_element(arr,size);
    cout<<"\t\tthe array you entered is:\n\t\t";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    if(index==-1)
        cout<<"\n\t\tno second largest element present in the array";
    else
        cout<<"\n\t\t second largest element in an array is at positon"<<index+1;
    return 0;
}