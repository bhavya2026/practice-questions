#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
}*head=NULL;

void create(){
    int tests,x;
    node *temp;
        do{
        node *newnode=new node;
        
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
    temp->next=head->next->next;
}
node * loop_detect(){
    node *front=head,*back =head;
    while(front!= back || front!=NULL){
        front=front->next->next;
        back=back->next;
        if(front==back)
            return front;
    }
    return NULL;
}
void deleteloop(){
    node *back=head;
    node *f=loop_detect();
    if(f==NULL)
        cout<<"no loop present in the list";
    else{
        while(back->next!=f->next || f!=NULL){
        back=back->next;
        f=f->next;
        }
        f->next=NULL;
        cout<<"no more loops";
    }   
}
int main(){
    create();
    deleteloop();
    return 0;
}
