#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter number";
    cin>>number;
    if(number<0){
        cout<<(-1)*number;
    }
    else
        cout<<number;
    return 0;
}