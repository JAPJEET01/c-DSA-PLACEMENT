#include<iostream>
using namespace std ; 

class node{
    public:
    int data ; 
    node*next ; 

    node(int val){
        data =  val ;
        next =  NULL ; 
    }
};

void insert_at_tail(node*&head ,  int val ){
    node*n =  new node(val) ; 
    if (head == NULL)
    {
        head =  n ; 
        return ; 
    }

    node*temp =  head ; 
    while (temp->next!=NULL)
    {
        temp =  temp->next ; 
    }
    temp->next = n ; 
    n->next =  NULL ; 
    }


void display(node *head){
    node*temp =  head ; 
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp= temp->next;
    }
    cout<<"NULL";
    
}
node* reverse_linked_list(node* &head ){
    node*prev_ptr =  NULL ; 
    node*current_ptr =  head ; 
    node*next_ptr ; 

    while (current_ptr != NULL)
    {
        next_ptr = current_ptr->next ; 
        current_ptr->next = prev_ptr;
        prev_ptr = current_ptr ; 
        current_ptr =  next_ptr ;
    
    }

    return prev_ptr ;
    

}
int main(){
node*head =  NULL ; 

insert_at_tail(head,1);
insert_at_tail(head,2);
insert_at_tail(head,3);
insert_at_tail(head,4);
insert_at_tail(head,5);


display(head);
cout<<endl;
node* newhead = reverse_linked_list(head) ;
display(newhead);
}