#include <iostream> 
using  namespace std ; 

int sum (int n){
    if(n==0) {
        return 0 ; 
    }
int prevsum =  sum(n-1) ; 
int sum  =  n + prevsum ; 
return sum  ; 

}



int  main(){
int n  ; 
cin>>n ; 
cout<<sum(n) ;
}