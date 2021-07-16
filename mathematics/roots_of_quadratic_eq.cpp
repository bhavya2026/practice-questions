#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c,one,two;
    cout<<"enter the value of a,b,c";
    cin>>a>>b>>c;
    //cout<<"the quadratic equation is: "<<a<<"x^2 + "<<b<<"x + "<<c;

    one=(  (-b)  +  ( sqrt ( pow ( b,2 )  -  4*a*c  )  ) )  / (2*a) ;
    two=(  (-b)  -  ( sqrt ( pow ( b,2 )  -  4*a*c  )  ) )   / (2*a);
    cout<<"roots are :"<<one<<" "<<two;
    return 0;
}