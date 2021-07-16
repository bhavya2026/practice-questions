#include<iostream>
using namespace std;
int main(){
    int test,size;
    cin>>test;
    //cout<<endl;
    for(int i=1;i<=test;i++){
        cin>>size;
        int arr[size];
        for(int j=0;j<size;j++){
            cin>>arr[j];
            cout<<" ";
        }
        while(size>0){
            for(int k=0;k<size;k++){
            if(arr[k]==size){
                if(k!=size-1){
                    for(int l=k+1;i<size;l++)
                        arr[l-1]=arr[l];    
                }
                size--;
            }
        }
        }
        if(size==0)
            cout<<"YES";
        else
            cout<<"NO";
        
    }
    return 0;
}