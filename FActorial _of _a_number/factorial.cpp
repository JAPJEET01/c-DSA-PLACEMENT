#include <iostream>
using namespace std ; 

int fact(int n){
    int factorial =  1     ; 
    for (int  i = 1; i <= n ; i++)
    {

        factorial *= i  ; 
    }
    return factorial ;
        // cout<<factorial ; 
}

int main(){
    int n ;
    cout<<"ENTER ANY NUMBER  " ; 
    cin>> n ;
    int ans = fact(n) ;
    cout<<ans ;
}