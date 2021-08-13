#include<iostream>
using namespace std;
int check(int arr[],int brr[],int a,int b){
    int i=0;int j=0;
    while(i<a && j<b){
        if(arr[i]<brr[j])
            i++;
        else if(arr[i]>brr[j])
            j++;
        else {
                cout<<arr[i];
                i++;
                j++;
            }
                
    }
}
int main(){
    int a[6]={1,2,3,6,7,7};
    int b[7]={2,6,6,7,7,7,7};
    check(a,b,5,7);
    return 0;
}