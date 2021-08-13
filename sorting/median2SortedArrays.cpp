//wap to find the median of two sorted arrays
#include<iostream>
using namespace std;
int median(int *,int *,int,int);
int main(){
    int size1,size2;
    cout<<"enter the size of array 1  ";
    cin>>size1;
    int arr[size1];
    cout<<"enter the elements of array 1 \n";
    for(int i=0;i<size1;i++){
        cout<<"enter the elements "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"\nenter the size of array 2  ";
    cin>>size2;
    int brr[size2];
    cout<<"enter the elements of array 2 \n";
    for(int i=0;i<size2;i++){
        cout<<"enter the elements "<<i+1<<": ";
        cin>>brr[i];
    }
    cout<<"the median element is : "<<median(arr,brr,size1,size2);
    return 0;
}
int median(int *arr,int *brr,int m,int n){
    int index,i=0,j=0;
    if((m+n)%2==0)

        index = ( (m+n)/2 + (m+n)/2 -1 ) / 2;
    else
        index = ( m + n ) / 2;

    int count=0;
    for( ;count<index;count++){

        if(arr[i]<brr[j])
            i++;
        else if(arr[i]>brr[j])
            j++;
        else{
            i++;
            j++;
            count++;
        }
    }
    if(arr[i]<brr[j])
        return arr[i];
    else
        return brr[j];
}