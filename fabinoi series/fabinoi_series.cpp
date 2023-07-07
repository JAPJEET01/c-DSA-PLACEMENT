#include  <iostream>
using namespace std ; 

void fbi( int n){
    int tn = 0 ;
    int ts = 1 ;
    int tp ; 
    for (int i = 1; i <= n; i++)
    {
        

        cout  << tn <<","; 
        tp = tn + ts ; 
        tn =  ts ;
        ts =  tp  ;


    }
    
}

int main(){
    int n ;
    cin >>n ;
    fbi(n) ; 

}