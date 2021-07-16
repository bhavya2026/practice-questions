#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main(){
    int a,b;
    cout<<"enter the numbers";
    cin>>a>>b;
    int lcm=(a*b)/gcd(a,b);
    cout<<"lcm of two numbers is"<<lcm;
    return 0;
}