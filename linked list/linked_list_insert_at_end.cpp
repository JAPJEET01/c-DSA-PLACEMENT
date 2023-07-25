#include<iostream>
using namespace  std ; 
class node{
    public:
    int data ; 
    node* next ; 


    node(int val){
        data =  val ; 
        next =  NULL; 

    }

};
    void insertAT_End(node* &head ,  int val){
        node*n =  new node(val); 
        
        if (head == NULL)
        {
            head =  n ;
            return ; 
        }
        
        
        node*temp =  head ; 
        while (temp->next!= NULL)
        {
            temp =  temp->next ;

        }

        temp->next =  n ; 
        n->next=  NULL ;
    

    }




void display(node*head ){
    node*temp =  head ; 
    while (temp!=NULL)
    {
        cout<<temp->data<<" " ; 
        temp = temp->next ; 
    }
    cout<<endl ;
}

int main(){

    node*head =NULL;
    insertAT_End(head,2);
    insertAT_End(head,3);
    insertAT_End(head,4);
    display(head);
}