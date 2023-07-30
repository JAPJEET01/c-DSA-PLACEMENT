#include<iostream>
using namespace std ; 

class node{
    public:
    int data ; 
    node* next ; 

    node(int val){
        data =  val ; 
        next =  NULL ; 
    }
};

void insert_at_tail(node* &head , int val){
    
    node * n =  new node(val) ; 

    if (head ==  NULL)
    {
        head =  n ;
        return ; 
    }
    
    node* temp =  head ; 
    while (temp->next!=NULL)
    {
        temp= temp->next;
    }
    temp->next = n ; 
    n->next =  NULL; 
}
void insert_at_head(node* &head , int val){
    node * n = new node(val);
    n ->next =  head ; 
    head=n;

}
void display(node* head){
    node*temp =  head ; 
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp =  temp->next ; 
    }
    cout<<"NULL"<<endl ; 
}


int main(){
    node*head =  NULL;
    int n  ; 
    cin >> n  ; 
    for (int i = 0; i <n; i++)
    {
        int in;
        cin>>in;
        insert_at_tail(head,in);
        
    }
    insert_at_head(head,6);
    display(head);

}