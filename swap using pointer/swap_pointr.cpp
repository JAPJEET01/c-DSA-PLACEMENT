#include <iostream> 
using namespace std ;

int  swap(int *a , int *b ){
    int temp =  *a ;
    *a = *b ; 
    *b = temp ;  
    return  *a , *b ; 
}

int main (){
    int  a  = 4  ; 
    int  b  = 6  ; 
    swap (a, b ) ;


    cout<<a <<" "<< b   ; 
}