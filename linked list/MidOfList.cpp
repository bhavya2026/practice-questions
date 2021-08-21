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
int mid_list(){

    node *slow=head,*fast=head;
    while(fast !=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow->data;
}
main(){
    int test;
    do{
        create();
        cout<<"the mid element of the list is : "<<mid_list();
        cout<<"\npress any number to continue \npress 0 to stop";
        cin>>test;       
    }
    while(test);
    return 0;
}