#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
} *head=NULL;
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
void insert(int x){
    node *temp=head, *curr=0;
    if(temp==NULL){
        temp->data=x;
        temp->next=NULL;
    }
    while(temp->data<=x){
        curr=temp;
        temp=temp->next;
    }
    node *newnode=new node;
    newnode->data=x;
    newnode->next=curr->next;
    curr->next=newnode;
}
void display(){
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}

int main(){
    create();
    insert(6);
    display();
    return 0;
}