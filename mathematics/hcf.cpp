#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter two numbers";
    cin>>a>>b;
    while(a!=b){
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    cout<<a<<" is the hcf of two numbers";
}