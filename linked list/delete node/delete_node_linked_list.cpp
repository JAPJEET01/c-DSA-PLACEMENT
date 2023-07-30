#include <iostream> 
using namespace std ;  

class node{
public:
    int data ;  
    node* next ; 

node(int val){
    data = val ; 
    next =   NULL ; 
}
};

void  instert_at_tail(node* &head , int val){
    node*n =  new node(val);
    if (head ==  NULL)
    {
        head =  n ; 
        return ; 
    }
    node* temp =  head ; 
    while (temp->next!= NULL)
    {
        temp =  temp ->next ;
    }
    temp->next = n ;
    n->next = NULL ; 

}

void display(node *head){
    node * temp  =  head ;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp= temp->next;
    }
    cout<<"NULL"<<endl ; 
}


void delte_at_head(node*&head ){

    if (head == NULL)
    {
        return ;
    }
    if (head->next == NULL)
    {
        delete head ; 
        return;
    }
    
    node* todelete =  head ;
    head =  head->next ; 
    delete todelete ;  
}
void deletion(node* &head , int val ){
    
        if (head == NULL)
    {
        return ;
    }
    
    node*temp =  head ; 
    while (temp->next->data!= val)
    {
        temp= temp->next;
    }
    node* todelete =  temp->next;
    temp->next =  temp->next->next;
    delete todelete ;
}
int main(){
    node*head =  NULL;
    instert_at_tail(head ,1);
    instert_at_tail(head ,2);
    instert_at_tail(head ,3);
    instert_at_tail(head ,4);
    instert_at_tail(head ,5);

display(head);

delte_at_head(head);

display(head);
deletion(head , 5);
display(head);
}