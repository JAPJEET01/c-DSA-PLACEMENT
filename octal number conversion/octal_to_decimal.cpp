#include <bits/stdc++.h>
#include <math.h>
using namespace std ; 


int octaltodeci(int n ){
    int ans = 1 ;
    int result  ;
    int x=1 ; 
    while (n>0)
    {
      
        int y = n %10;
        int result = result +(x*y);
        x*=8;
        
        n= n/10 ;
        
    }
    return result ;
    
}

int main (){
    int n ;
    cin >> n ; 
    int ans1  ; 

    ans1  =  octaltodeci(n) ; 
    cout << ans1  ;
}