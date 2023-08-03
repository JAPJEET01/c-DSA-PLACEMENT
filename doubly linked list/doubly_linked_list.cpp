#include<iostream>
using namespace std ; 

class node{

public:
int data ; 
node* next ; 
node* previous ; 


node(int val){
    data =  val ; 
    next =  NULL;
    previous =  NULL ;
}
};


void insert_at_tail(node* &head , int val){
    node*n =  new  node(val);
    if (head ==  NULL)
    {
        head =  n ; 
        return ; 
    }
    node*temp =  head ; 
    while (temp->next != NULL)
    {
        temp =  temp->next ; 
    }
    
    temp->next= n ;
    n->previous = temp;
    n->next =  NULL;  
}

void display(node* head){
    node*temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp= temp->next;
    }
    cout<<"NULL" ;
    
}
int main(){
    node* head =  NULL ; 
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    insert_at_tail(head,3);
    insert_at_tail(head,4);
    insert_at_tail(head,5);
    display(head);
}