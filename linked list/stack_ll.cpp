#include<iostream>
using namespace std;
struct stack{
    int data;
    stack *next;
} *top=NULL;
void push(){
    int tests;
    do{
    stack *newnode=new stack;;
    cout<<"enter the element";
    cin>>newnode->data;
    newnode->next=top;
    top=newnode;
    cout<<"press 0 to stop \npress any key to continue";
    cin>>tests;
    }
    while(tests);
}
void pop(){
    stack *temp=top;
    top=temp->next;
    free(temp);  
}
void peak(){
    cout<<top->data<<" ";
}
void display(){
    stack *temp=top;
    while(temp!=NULL)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
}
main(){
    int choice,tests;
    do{

        cout<<"press 1 to push \npress 2 to pop\npress 3 to find peak \npress 4 to display";
        cin>>choice;
        switch(choice){
            case 1: push();break;
        }
        push();
        display();
        cout<<"\n";
        pop();
        cout<<"\n";
        display();
        peak();
        return 0;
}
    }
    