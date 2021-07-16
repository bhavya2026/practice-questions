#include<iostream>
using namespace std;
int main(){
    int num,temp,rev=0,mod;
    cout<<"enter the number";
    cin>>num;
    temp=num;
    while(temp!=0){
        mod=temp%10;
        rev=rev*10+mod;
        temp=temp/10;
    }
    if(rev==num)
        cout<<"pallindrome number";
    else    
        cout<<"not a pallindrome number";
}