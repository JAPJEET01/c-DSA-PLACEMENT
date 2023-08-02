#include<iostream>
using namespace std ;  

class node{
public:
int data ; 
node * next ; 

node(int val){
    data =  val ; 
    next =  NULL ; 
}
};


void insert_at_tail(node* &head , int val){
    node* n  =  new node(val);
    if(head ==  NULL){
        head =  n ; 
        return ; 
    }
    node* temp =  head ; 
    while (temp->next!= NULL)
    {
        temp= temp->next;
    }
    temp->next =  n ;
    n->next =  NULL ; 
}

void display(node* head){
    node*temp =  head ; 
    while (temp!=NULL)
    {
        cout<<temp->data<<"->" ; 
        temp= temp->next ; 
    }
    cout<<"NULL";
}

bool detect_cycle(node *&head){
    node* slow_ptr =  head ; 
    node* fast_ptr =  head ; 

    while (fast_ptr!= NULL && fast_ptr->next!=NULL)
    {
        slow_ptr= slow_ptr->next ; 
        fast_ptr =  fast_ptr->next->next;

        if (fast_ptr ==  slow_ptr)
        {
            return true ;
        }
    }
    return false ; 
    
}
int main(){

node * head = NULL;
insert_at_tail(head,1);
insert_at_tail(head,3);
insert_at_tail(head,2);
insert_at_tail(head,4);
insert_at_tail(head,5);


display(head);
}