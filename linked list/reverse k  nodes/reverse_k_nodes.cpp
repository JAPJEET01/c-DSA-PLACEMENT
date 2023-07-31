#include<iostream>
using namespace std ;  

class node {

public:
int data ;  
node* next ; 

node(int val){
    data =  val ;
    next =  NULL;
} 
};

void insert_at_head(node*&head , int val ){
    node* n  =  new node (val) ;
    if (head ==  NULL)
    {
        head = n ; 
        return ; 
    }
    
    node *temp  =  head ; 
    while (temp->next!= NULL)
    {
        temp=temp->next;
    }
    temp->next =   n  ; 
    n->next =  NULL ; 
}

node* reversek(node*&head , int k ){
    node* prev_ptr =  NULL ;
    node* current_ptr =  head ;
    node* next_ptr ;

    int count  = 0 ; 
    while (current_ptr != NULL &&  count<k)
    {
        next_ptr =  current_ptr->next;
        current_ptr->next =  prev_ptr;  
        prev_ptr =  current_ptr ; 
        current_ptr = next_ptr ; 
        count++    ;
    }
    
    if (next_ptr!=NULL)
    {
        head->next = reversek(next_ptr , 2 );
    }
    
        return prev_ptr;
}  

void display(node* head){
    node * temp =  head ;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp= temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}
int main(){
    node * head    = NULL ; 
    insert_at_head(head , 1);
    insert_at_head(head , 2);
    insert_at_head(head , 3);
    insert_at_head(head , 4);
    insert_at_head(head , 5);
    insert_at_head(head , 6);
    display(head);
    node* newhead =  reversek(head , 2  );
    display(newhead);
}