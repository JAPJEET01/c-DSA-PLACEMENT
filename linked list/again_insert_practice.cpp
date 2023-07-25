#include<iostream>
using   namespace std ; 

class node{
    public:
    int data ; 
    node*next ; 

    node(int val){
        data=  val;
        next =  NULL ; 
    }
};

void insert_at_tail(node* &head, int  val){
    node* n  =  new node(val);

    if (head ==  NULL)
    {
        head =  n ; 
        return ; 
    }
    
    node*temp =  head ; 
    while (temp->next!= NULL)
    {
        temp =  temp->next;
    }
    
    temp->next =  n ;
    n->next =  NULL ; 
}

void inset_at_head(node* &head , int val ){
    
    node* n = new node(val) ; 
    n->next = head ;  
    head =  n ;


}

void display(node* head){
    node*  temp =  head ; 
    while (temp!=   NULL)
    {
        cout<<temp->data<<"->" ; 
        temp= temp->next  ;
    }
    cout<<"NULL"<<endl ; 

} 

bool search(node*head ,  int key ){
    node* temp =  head ; 
    while (temp!= NULL)
    {
        if (temp->data ==  key )
        {
            cout<<"KEY FOUND AT "<<temp ;
            return true ;  
        }
        temp =  temp ->next ;
    }
        return false ; 
    
}


int main(){
    node*head =  NULL ; 

    insert_at_tail(head,4);
    insert_at_tail(head,26);
    insert_at_tail(head,43);
    insert_at_tail(head,43);
    insert_at_tail(head,43);
    inset_at_head(head,55);
    inset_at_head(head,54345);
    insert_at_tail(head,43);
    insert_at_tail(head,43);
    insert_at_tail(head,43);
    search(head,2) ;
    display(head) ;

} 