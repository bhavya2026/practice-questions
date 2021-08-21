/*wap to implement singly linked list and perform
1.creation
2.insertion
3.deletion
*/
#include<iostream>
using namespace std;
struct node
{
    int data;
    node * next;
}*head=NULL;
//*************************CREATING LINKED LIST**********************************************
void create(){
        int x,test;

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
        cin>>test;
    }
    while(test);
}
//************************SEARCHING A VALUE**************************************************************
int search(int x){
    node *temp=head;
    int pos=0;
    while(temp!=NULL){
        if(temp->data==x)
            return pos+1;
        temp=temp->next;
        pos++;
    } 
    return -1;      
}
//**********************************LENGTH OF LIST*************************************************************
int lengthSLL(){
    node *temp;
    int count=0;
    temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
//*****************************INSERTION**********************************************************
void insertAtBeg(){
    node *newnode=new node;
    cout<<"enter the value : ";
    cin>>newnode->data;
    newnode->next=head;
    head=newnode;
}
void insertAtEnd(){
    node *newnode=new node ;
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    cout<<"enter the value you want to insert at end";
    cin>>newnode->data;
    newnode->next=NULL;
    temp->next=newnode;

}
void insertatpos(int pos){
    int i=1;
    node *temp=head;
    if(pos==1)  
        insertAtBeg();
    if(pos>lengthSLL()){
        cout<<"invalid position";
    }
    else{
        node *newnode=new node;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        cout<<"enter the value ";
        cin>>newnode->data;
        newnode->next=temp->next;
        temp->next=newnode;
    }
    
}
//********************************DELETION**********************************************************
void deletefrombeg(){
    if(head==NULL)
        cout<<"\n\t\t\t\tnothing to delete";
    node *temp;
    temp=head;
    head=temp->next;
    delete temp;
}
void deletefromend(){
    node *temp=head;
    if(temp==NULL)
        cout<<"\n\t\t\t\tnothing to delete";
    if(temp->next==NULL)
    {
        delete temp ;
        head=NULL;
    }
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
}
void deletefrompos(int pos){
    if(pos==1)
        deletefrombeg();
    if (pos>lengthSLL())
        cout<<"\n\t\tinvalid position";
    else{
        int i=1;
        node *curr,*temp=head;
        while(i<pos-1){
            temp=temp->next;
            i++;
        }
        curr=temp->next;
        temp->next=curr->next;
        delete curr;
        delete temp;
    }
    
    
}
//***********************************************DISPLAY****************************************
void display(){
    node *temp;
    temp=head;
    cout<<"\n\t\t\t\t";
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }

}
//*************************REVERSE OF LINKED LIST ******************************
void reverse(){
    node *prev=NULL,*curr=head, *last =head;
    while(curr !=NULL){
        last=last->next;
        curr->next=prev;
        prev=curr;
        curr=last;
    }
    head=prev;
}
//*********************************************MAIN()*****************************************************
int main(){
    cout<<"\n\n\t\t\t********SINGLY LINKED LIST*******************\n";
    int tests;
    do{
        int choice,inlist,pos,dellist,ele,p,pos1;
        cout<<"\n\t\t\t\tPRESS 1 TO CREATE\n\t\t\t\tPRESS 2 TO INSERT\n\t\t\t\tPRESS 3 TO DELETE \n\t\t\t\tPRESS 4 TO SEARCH \n\t\t\t\tPRESS 5 TO FIND THE LIST LENGTH\n\t\t\t\tPRESS 6 TO DISPLAY\n\t\t\t\tPRESS 7 TO REVERSE THE LIST\n\n";
        cout<<"\n\n\t\t\t\t";
        cin>>choice;
        switch (choice)
        {
        case 1: create();break;
        case 2: cout<<"\n\n\t\tPRESS 1 TO INSERT AT BEGINNING\n\t\tPRESS 2 TO INSERT AT THE END\n\t\t PRESS 3 TO INSERT AT A POSITION\n";
                cin>>inlist;
                switch (inlist)
                {
                case 1: insertAtBeg(); break;
                case 2: insertAtEnd();break;
                case 3: cout<<"\t\t\t\tenter the position\n";
                        cin>>pos1;
                        insertatpos(pos1);break;
                default:cout<<"\n\nenter right option";
                
                }
                break;
        case 3: cout<<"\n\n\t\tPRESS 1 TO DELETE FROM BEGINNING \n\t\tPRESS 2 TO DELETE FROM THE END\n\t\tDELETE FROM A POSITION";
                cin>>dellist;
                switch (dellist)
                {
                case 1: deletefrombeg();break;
                case 2: deletefromend();break;
                case 3: cout<<"\t\t\t\tenter the position\n";
                        cin>>pos;
                        deletefrompos(pos);break;
                default:cout<<"\n\n\t\t\t\t enter right choice";
                }break;
        case 4: cout<<"\t\t\t\tenter the element you want to search";
                cin>>ele;
                p=search(ele);
                if( p!=-1 )
                    cout<<"\n\t\t\t\tthe element "<<ele<<" is at position "<<p;
                else 
                    cout<<"\n\t\t\t\tthe element is not present in the list ";
                break;
        case 5: cout<<"\n\t\t\t\tthe list has "<<lengthSLL()<<" elements";break;
        case 6:display();break;
        case 7: reverse();break;
        default:cout<<"\t\t\t\tenter right choice";
        }
        cout<<"\n\n\t\t\t\tpress 1 to continue \n\t\t\t\tpress 0 to stop";
        cin>>tests;
    }
    while(tests);

     return 0;
 }