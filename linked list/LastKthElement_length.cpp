#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
}
*head=NULL;
void create(){
    int tests,x;
        do{
        node *newnode=new node;
        node *temp;
        cout<<"\t\t\t\tenter the value ";
        cin>>x;
        newnode->data=x;
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        cout<<"\n\t\t\t\tpress any key to continue\n\t\t\t\tpress 0 to stop";
        cin>>tests;
    }
    while(tests);
}
int lengthsll(){
    if(head==NULL)
        return -1;
    node *temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void kthlastElement(int k){
    if(head==NULL)
        cout<<"list unavailable";
    if(k>lengthsll())
        cout<<"invalid k value";
    int i=1;
    node *temp=head;
    while(i<lengthsll()-k+1){
        temp=temp->next;
        i++;
    }
    cout<<temp->data;
}
int main(){
    create();
    kthlastElement(3);
}