#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num;
    cout<<"enter number";
    cin>>num;
    int digits=floor(log10(num)+1);
    cout<<digits;
    return 0;
}