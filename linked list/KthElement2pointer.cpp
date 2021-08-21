#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
}*head=NULL;
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
void kthelement(int k){
    if(head==NULL)
        cout<<"list unavailable";
    if(k>lengthsll())
        cout<<"wrong input";
    else{
        int i=0;
        node *first=head,*second=head;
        while(i<k){
            first=first->next;
            i++;
        }
        while(first!=NULL){
            first=first->next;
            second=second->next;
        }
        cout<<second->data;
    }
}
main(){
    create();
    kthelement(8);
    return 0;
}