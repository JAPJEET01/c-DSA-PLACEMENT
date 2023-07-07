#include <iostream>
using  namespace std ; 



int fact_ncr(int n){
    int fact = 1 ; 
    for (int  i = n; i >= 1 ; i-- ) 
    {
        fact *= i ; 

    }
    return fact ; 
}

int main (){
    int n  ;
    int r  ;
    int ncr  ;

    cout <<"NETR ANY TWO NUMBER   : "; 
    cin>> n ;
    cin>> r ; 
    int a = fact_ncr(n);
    int b = fact_ncr(r);
    int c = fact_ncr(n - r);

    int ans = a / (b * c) ;
    cout<< ans  <<endl ;
    

}

