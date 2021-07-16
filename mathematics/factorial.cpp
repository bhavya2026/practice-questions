#include<iostream>
using namespace std;
int fact(int n){
    if(n==0)
        return 1;
    return(n*fact(n-1));
}
int main(){
    int number;
    cout<<"enter the number";
    cin>>number;
    int factorial=fact(number);
    cout<<"the factorial of number "<<number <<"is "<<factorial;
    return 0;
}