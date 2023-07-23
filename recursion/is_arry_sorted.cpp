#include <iostream> 
using namespace std ;


bool isSorted(int arr[]  ,  int n ) {

    if (n == 1)
    {
return true  ; 
    }
    
    bool restaryy =  isSorted(arr +1 , n-2) ;
    return (arr[0] <= arr[1]  &&  restaryy) ; 

}


int main() {
int n = 9; 
int arr[] = { 1,3,6,6,7,9} ;
 
    cout<<isSorted(arr ,  n ) ;


}