#include<iostream>
using namespace std;
int main(){
    int number,yes=0,no=0;
    cout<<"enter the number";
    cin>>number;
    if(number==1)
        no++;
    if(number==2 || number==3)
        yes++;
    if(number%2==0 || number%3==0){
        no++;
    }
    if(yes==0 && no==0){
        for(int i=5;i*i<=number;i=i+6){
            if(number%i==0 || number/(i+2)==0){
                no++;
            }
        }
        //yes++;
    }
    if(no!=0)
    {
        cout<<"not a prime number";
    }
    else
        cout<<"prime number";
    return 0;
}