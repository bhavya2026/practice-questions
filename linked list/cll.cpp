#include<iostream>
using namespace std;
struct cll{
    int data;
    cll *next;
} *head=NULL;
void create(){
    int test;
    
    do{   
        cll *newnode=new cll;
        cll *temp;    
        cout<<"\t\t\t\tenter the value ";
        cin>>newnode->data;       
        if(head==NULL){
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        temp->next=head;
        cout<<"\n\t\t\t\tpress any key to continue\n\t\t\t\tpress 0 to stop";
        cin>>test;
    }
    
    while(test);
    
}
void search(int val){
    cll *temp=head;
    do{
        if(temp->data==val){
            cout<<"\n\t\tvalue found";
            break;
        }
        temp=temp->next;
    }
    while(temp!=head);
}
int lengthcll(){
    cll *temp=head;
    int count=0;
    do{
        count++;
        temp=temp->next;
    }
    while(temp!=head);
    return count;
}
void display(){
    if(head==NULL)
        cout<<"nothing to print";
    else{
        cll *temp=head;
        do{
            cout<<temp->data<<"  ";
            temp=temp->next;
        }
        while(temp!=head);       
    }
    //delete newnode;
}
void insertatbeg(){
    cll *newnode,*temp=head;
    newnode=new cll;
    while(temp->next!=head)
        temp=temp->next;
   cout<<"\nenter the data";
   cin>>newnode->data;
   temp->next=newnode;
   newnode->next=head;
   head=newnode;
   delete temp;
    delete newnode;
}
void insertatend(){
    cll *newnode=new cll;
    cll *temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    cout<<"\n\t\tenter the data";
    cin>>newnode->data;
    newnode->next=temp->next;
    temp->next=newnode;
    delete temp;
    delete newnode;
}
void insertatpos(int pos){
    int i=1;
    cll *temp=head;
    cll *newnode=new cll;
    if(pos==1)
        insertatbeg();
    if(pos>lengthcll())
        cout<<"\n\t\tnot applicable";
    else{
        while(i<pos-1)
        {
            i++;
            temp=temp->next;
        }
        cout<<"\n\t\tenter data";
        cin>>newnode->data;
        newnode->next=temp->next;
        temp=newnode;
    }   
    delete temp;
    delete newnode;
}
void deletefrombeg(){
    cll *temp=head;
    while(temp->next!=head)
        temp=temp->next;
    temp->next=head->next;
    temp=head;
    head=temp->next;
    delete temp;
    
}
void deletefrompos(int pos){
    cll *temp=head;
    cll *f;
    int i=1;
    if(pos ==1)
        deletefrombeg();
    if(pos>lengthcll())
        cout<<"not applicable";
    else{
    while(i<pos-1){
        i++;
        temp=temp->next;
    }
    f=temp->next;
    temp->next=f->next;
    delete f;
    delete temp;
    }
}
void deletefromend(){
    cll *temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=head;
}
int main(){
    int test;
    cout<<"\n\t\tPRESS 1 TO CREATE A LIST\n\t\tPRESS 2 TO INSERT IN A LIST\n\t\t PRESS 3 TO FIND THE LENGTH\n\t\tPRESS 4 TO SEARCH VALUE IN THE LIST";
    cin>>test;
    switch(test){
        case 1: create();break;
        case 2: int in;
                cout<<"\n\t\tPRESS 1 TO INSERT AT THE BEGINNING\n\t\tPRESS 2 TO INSERT AT POSITION\n\t\tPRESS 3 TO INSERT AT END";
                cin>>in;
                switch(in){
                    case 1: insertatbeg();break;
                    case 2: int pos;
                            cout<<"\n\t\tENTER POSITION";
                            cin>>pos;
                            insertatpos(pos);
                            break;
                    case 3: insertatend();break;
                    default :cout<<"wrong choice";
                };break;
        case 3: cout<<"length is : "<<lengthcll();break;
        case 4: int x;
                cout<<"enter value to search";
                cin>>x;
                search(x);
                break;
        case 5: int del;
                cout<<"\n\t\tPRESS 1 TO DELETE FROM BEGINNIG\n\t\tPRESS 2 TO DELETE FROM POSITION\n\t\tPRESS 3 TO DELETE FROM THE END";
                cin>>del;
                switch(del){
                    case 1: deletefrombeg();break;
                    case 2: int pos;
                            cout<<"\n\t\tENTER POSITION";
                            cin>>pos;
                            deletefrompos(pos);
                            break;
                    case 3: deletefromend();break;
                    default:cout<<"wrong choice";
                };break;
        case 6: display();break;
    }
    
    return 0;
}