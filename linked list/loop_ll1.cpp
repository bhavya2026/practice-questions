#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
    int flag;
}*head=0;
void create(){
    node *newnode,*temp;
    int test;
    do{
        newnode=new node;
        cout<<"enter the data";
        cin>>newnode->data;
        newnode->flag=0;
        newnode->next=0;
        if(head==0)
        {
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=temp->next;
        }
        cout<<"press 1 to continue press 0 to stop";
        cin>>test;
    }
    while(test);
    temp->next=head->next->next;
}
void if_visited(){
    node *temp=head;
    do{      
        if(temp->flag==0){
            temp->flag=1;
            temp=temp->next;
        }
        else{
            cout<< "the loop is  present  at "<<temp->data;
            break;
        }
    }
    while(temp!=0);
}
//*****************************USING FLOYD'S CYCLE DETECTION**************************************
bool isloop(){
    node * slow=head, *fast=head;
    while(fast != NULL && fast->next!= NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast)
            return true;
    }
    return false;
}
int main(){
    create();
    int x;
    cout<<"enter x";
    cin>>x;
    if(x==1)
        if_visited();
    else 
        cout<<isloop();
    return 0;
}