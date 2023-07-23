#include <iostream> 
using namespace std ;

int fabo(int n){
    if (n ==0  )
    {
        return 0 ; 
    }
    if (n == 1  )
    {
        return  1 ; 
    }

    else{
    int faboo  =  fabo(n-1) + fabo(n-2);
    return faboo ;
    }
    
}


int main(){


int n  ; 
cin >> n ;


for (int i = 0; i < n; i++)
{
cout<<fabo(i)<< " " ;
    
}

}