#include<iostream>
using namespace std;
void TOH(int n,char from,char aux,char to){
    if(n==1){
        cout<<"move disk 1 from rod "<< from <<" to rod "<< to<< endl;
        return;
    }
    TOH(n-1,from,aux,to);
    cout<<"move disk "<<n <<" from rod "<< from<< " to rod "<< to <<endl;
    TOH(n-1,aux,to,from);
}
int main(){
    TOH(3,'A','C','B');
    return 0;
}
