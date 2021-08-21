/*IMPLEMENT DOUBLY LINKED LIST AND PERFORM FOLLOWING OPERATIONS
1.CREATION
2.INSERTION
    1.INSERTION AT BEGINNING
    2.INSERTION AT PARTICULAR POSITION
    3.INSERTION AT END
3.SEARCH IN A LIST
4.LENGTH OF THE LIST
5.DELETION
    1.DELETE FROM BEGINNING
    2.DELETE FROM A POSITION
    3.DELETE FROM END
6.REVERSE LIST
7.DISPLAY
*/

#include<iostream>
using namespace std;
struct node
{
    int data;
    node * prev;
    node * next;
}*head=NULL;
void create(){
    cout<<"\n\t\t******************************CREATING LIST************************************\n\n";
    int test;
    do{
        node *newnode,*temp;
        newnode=new node;
        cout<<"enter data ";
        cin>>newnode->data;
        newnode->prev=NULL;
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        cout<<"\n\n\t\tPRESS ANY KEY TO ADD NODE \n\t\tPRESS 0 TO STOP";
        cin>>test;
    }
    while(test);

}
//***********************************LENGTH OF THE LIST***********************************
int lengthdll(){
    node *temp=head;
    int count =0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void insertatbeg(){
    //cout<<"**********************INSERT AT BEGINNING************************";
    node *newnode;
    newnode=new node;
    cout<<"\n\t\tenter the value to be inserted at beginning";
    cin>>newnode->data;
    newnode->prev=NULL;
    newnode->next=head;
    head=newnode;
}
void insertatpos(int pos){
    if(pos==1)
        insertatbeg();
    if(pos>lengthdll())
        cout<<"\n\t\tINVALID POSTION ENTERED";
    else{
        //cout<<"********************INSERT AT A POSTION*******************************\n\n";
        int i=1;
        node *newnode,*temp=head;
        newnode=new node;
        cout<<"enter the data";
        cin>>newnode->data;
        newnode->prev=0;
        newnode->next=0;
        while(i<pos-1){
            temp=temp->next;
        }
        newnode->prev=temp;
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
void insertatend(){
    //cout<<"\n\t\t**********************INSERT AT END********************************";
    node *newnode,*temp=head;
    newnode =new node ;
    while(temp->next!=NULL)
        temp=temp->next;
    cout<<"enter the data";
    cin>>newnode->data;
    newnode->prev=temp;
    newnode->next=NULL;
}
void deletefrombeg(){
    node *temp;
    temp=head;
    head=temp->next;
    free(temp);
}
void deletefrompos(int x){
    if(x==1)
        deletefrombeg();
    if(x>lengthdll())
        cout<<"\n\t\twrong position";
    else{
        int i=1;
        node *temp=head;
        while(i<x-1){
            temp=temp->next;
            i++;
        }
       node *curr=temp->next;
       temp->next=curr->next;
       curr->next->prev=temp;
       delete curr;
       delete temp;

    }
}
void deletefromend(){
    node *temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->prev->next=NULL;
    delete temp;
}
void search(int x){
    node *temp=head;
    while(temp!=NULL){
        if(temp->data==x){
            cout<<"element found \n";
            break;
        }
    }
}
void reverse(){
    node *s,*temp=head;
    while(temp->next!=NULL){
        s=temp->prev;
        temp->prev=temp->next;
        temp->next=s;

        temp=temp->prev;
    }
        s=temp->prev;
        temp->prev=temp->next;
        temp->next=s;
        head=temp;

}
void display(){
    node *temp=head;
    while(temp != NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
}
int main(){
    int test;
    do{
        int choice;
        cout<<"\n****************MAIN MENU*******************************\n\n";
        cout<<"\t\tPRESS 1 TO CREATE\n\t\tPRESS 2 TO INSERT A NODE\n\t\tPRESS 3 TO FIND LENGTH OF THE LIST\n\t\tPRESS 4 TO SEARCH A VALUE IN THE LIST\n\t\tPRESS 5 TO DISPLAY THE LIST\n\t\tPRESS 6 TO DISPLAY\n\t\tPRESS 7 TO REVERSE";
        cin>>choice;
        switch(choice){

            case 1: create();break;
            case 2: int in;
                    cout<<"\n\t\t PRESS 1 TO INSERT AT THE BEGINNING\n\t\t PRESS 2 TO INSERT AT A POSITION \n\t\t PRESS 3 TO INSERT AT THE END ";
                    cin>>in;
                    switch(in)
                    {
                        case 1: insertatbeg();break;
                        case 2: int pos;
                                cout<<"\n\t\tENTER THE POSTION";
                                cin>>pos;
                                insertatpos(pos);break;
                        case 3: insertatend();break;
                        default: cout<<"\n\t\twrong choice entered";
                    }break;
            case 3: cout<<"the length of list is : "<<lengthdll();break;
            case 4: int x;
                    cout<<"\n\t\tenter the value to search in the list";
                    cin>>x;
                    search(x);
                    break;
            case 5: int del;
                    cout<<"\n\t\tPRESS 1 TO DELETE FROM BEGINNING\n\t\tPRESS 2 TO DELETE FROM THE POSITION\n\t\tPRESS 3 TO DELETE FROM THE END";
                    cin>>del;
                    switch(del){
                        case 1: deletefrombeg();break;
                        case 2: int pos;
                                cout<<"\n\t\tenter the position ";
                                cin>>pos;
                                deletefrompos(pos);break;
                        case 3: deletefromend();break;
                        default: cout<<"wrong choice ";
                        
                    }break;
            case  6:display();break;
            case 7: reverse();break;
            default:cout<<" \t\tplease enter the right choice";
        }
        
        cout<<"\n\n\t\tPRESS ANY KEY FOR MAIN MENU \n\t\tPRESS 0 TO STOP";
        cin>>test;
    }
    while(test);
    cout<<"**************THANKYOU************************";
}