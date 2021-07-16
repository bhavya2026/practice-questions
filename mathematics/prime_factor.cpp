#include<iostream>
using namespace std;
void prime_factors(int a){
    if(a<=1){
        cout<<"cannot be predicted";
    }
    while(a%2==0){
        cout<<2<<" ";
        a/=2;
    }

    while(a%3==0){
        cout<<3<<" ";
        a/=3;
    }
        
    for(int i=5;i*i<=a;i=i+6){
        while(a%i==0){
             cout<<i<<" ";
             a/=i;
        }
           
        while(a%(i+2)){
            cout<<i+2<<" ";
            a/=(i+2);
        }

    }
    if(a>3)
        cout<<a;
}
int main(){
    int num1;
    cout<<"enter the number";
    cin>>num1;
    prime_factors(num1);
    return 0;
}