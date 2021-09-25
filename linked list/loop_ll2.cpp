//wap to detect loop in the linked list using change reference method
#include<iostream>
using namespace std;
struct node {
    int data;
    node *next;
}*head=0;
void create(){
    int test;
    do{
        node *newnode,*temp;
        newnode=new node;
        cout<<"enter data";
        cin>>newnode->data;
        newnode->next=0;
        if(head==0)
            head=temp=newnode;
        else{
            temp->next=newnode;
            temp=newnode;
        }
        cout<<"press 1 to continue press 0 to stop";
        cin>>test;
    }
    while(test);
}
void if_loop(){

    node *temp=head;
    node *visited=new node;
    while(temp!=0){
        if(temp->next==0)
            cout<<"loop not present";
        if(temp->next==visited){
            cout<<"loop detected";
            break;
        }

        temp->next=visited;


    }
}