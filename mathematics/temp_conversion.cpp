//wap to convert celsius into farenheit
#include<iostream>
using namespace std;
int convert_temp(int value){
    return (value*9/5)+32;
}
int main(){
    int number;
    cout<<"enter the temperature in celsius";
    cin>>number;
    cout<<"temperature in farenheit is"<<convert_temp(number);
    return 0;
}