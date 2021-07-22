/*Given n non-negative integers representing an elevation map where the width of each bar is 1, 
compute how much water it can trap after raining.


Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
 */
#include<iostream>
using namespace std;
int max(int,int);
int min(int,int);
int trapping_rainwater(int *,int);
int main(){
    int size;
    cout<<"enter the size of an array";
    cin>>size;
    int trap[size];
    for(int i=0;i<size;i++){
        cout<<"enter the element "<<i+1<<":\n";
        cin>>trap[i];
    }
    cout<<"the maximum trapped water is :  "<<trapping_rainwater(trap,size);
    return 0;
}
int max(int num1,int num2){
    if(num1>num2)
        return num1;
    return num2;
}
int min(int num1,int num2){
    if(num1<num2)
        return num1;
    return num2;
}
int trapping_rainwater(int *arr,int size){

    int lmax[size] , rmax[size], result=0;

    lmax[0] = arr[0];

    for(int i=1;i<size;i++)

        lmax[i]=max(arr[i],lmax[i-1]);
    
    rmax[size-1] = arr[size-1];

    for(int i=size-2;i>=0;i--)

        rmax[i]=max(arr[i],rmax[i+1]);

    for(int i=1;i<size-1;i++)

        result+=(min(lmax[i],rmax[i])-arr[i]);
    
    return result;
}
