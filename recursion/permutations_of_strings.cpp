#include<iostream>
using namespace std;
// void swap(char *a,char *b ){
//     char temp;
//     temp=a;
//     a=b;
//     b=temp;
// }
void swap(char *a,char *b){
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
    //return a,b;
}
void permute(string s,int size,int i=0){
    char temp;
    if(i==size-1)
        cout<<s<<" ";
    for(int j=i;j<size-1;j++){
        swap(&s[i],&s[j]);
        permute(s,size,i+1);
        swap(&s[i],&s[j]);
    }
}
int main(){
    string s="ABC";
    int size=s.length();
    permute(s,size);
}

