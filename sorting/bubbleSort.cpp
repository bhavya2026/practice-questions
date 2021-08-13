//wap to implement bubble sort
#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void bubble_sort(int *arr,int size){

    int i,j;
    for(i=0;i<size;i++)
        for(j=0;j<size-1-i;j++)
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);

}
int main(){

    int test,size;
    do{
        cout<<"\nenter the size of the array  ";
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++){
            cout<<"\nenter the element "<<i+1<<" : ";
            cin>>arr[i];
        }
        cout<<"\n\noriginal array : \n";
        for(int i=0;i<size;i++)
            cout<<arr[i]<< "  ";
        bubble_sort(arr,size);
        cout<<"\n\nsorted array : \n";
        for(int i=0;i<size;i++){
            cout<<arr[i]<<"  ";
        }

        cout<<"\n\npress any key to continue\npress 0 to stop  ";
        cin>>test;
    }
    while(test);

    if(!test)
        cout<<"\n\n\t\t\t\t**************THANKYOU************\n\n";
    
    return 0;
}