#include<iostream>
#include<math.h>
using namespace std;
bool armstrong(int num){
    int n=num;
    int res=0;
    while(n!=0){
        res+=pow(n%10,3);
        n/=10;
    }
    if(res==num)
        return 1;
    return 0;
}
int main(){
    int number;
    cout<<"enter the number";
    cin>>number;
    if(armstrong(number))
        cout<<"the number is an armstrong number";
    else
        cout<<"not an armstrong number";
    return 0;
}