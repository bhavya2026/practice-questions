//wap to implement merge sort
#include<iostream>
using namespace std;
void function(int n){
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j=j+i)
            cout<<"*  ";
    //cout<<"\n";
    //function(n-3);
}
int main()
{
    function(5);
    return 0;

}