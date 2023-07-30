#include <iostream>
using namespace std ; 
int main (){
    // int a  =  10  ; 
    // int *aptr = &a  ; 

    // cout<<aptr <<endl  ; 
    // cout<<a <<endl  ; 


    int arr[] = {1,2,3} ;    
    int *arrptr ; 
    arrptr= arr ; 

for (int i = 0; i < 3; i++)
{
    cout<<(*arr  + i ) << " "  ;
    
}


}