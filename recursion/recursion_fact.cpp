#include <iostream> 
using namespace std ; 

int fact_num(int n){

    if(n==0 || n == 1){
        return 1 ; 
    }

    else{
        return (n * fact_num(n-1)) ; 
    }
}


int main(){
    int n  ;
    cin >> n ; 

    cout<<fact_num(n) ;
} 