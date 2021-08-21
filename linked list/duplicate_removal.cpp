#include<iostream>
using namespace std;
struct node {
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
void remove_duplicates(){
    if(head==NULL)
        cout<<"list unavailable";
    else{
        node *curr=head;
        while(curr !=NULL && curr->next!=NULL){
            if(curr->data==curr->next->data)
            {
                node *temp=curr->next;
                curr->next=temp->next;
                delete temp;
            }
            else
                curr=curr->next;
        }
    }
}
void display(){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<"\n";
}
main(){
    create();
    display();
    remove_duplicates();
    display();
    return 0;
}