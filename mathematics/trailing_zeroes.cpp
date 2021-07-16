#include<iostream>
using namespace std;
int main(){
    int number,count=0,fact=1;
    cout<<"enter the number";
    cin>>number;
    for(int i=2;i<=number;i++){
        fact*=i;
    }
    while(fact%10==0)
    {
        count++;
        fact/=10;
    }
    cout<<"trailing zeroes are: "<<count;
    return 0;
}