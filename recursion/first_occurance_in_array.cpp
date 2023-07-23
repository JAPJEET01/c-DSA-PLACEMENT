#include <iostream> 
using namespace std ; 

int firstoccur(int arr[] , int n , int i , int key){

if (i==n)
{
    return  -1 ; 
}

if (arr[i] == key)
{
    return i ;
}

return firstoccur(arr, n , i+1 ,  key) ;

}

int main(){

    int arr[] =  {1,1,4,2,3,4,5,2,3,5} ;
    cout<<(arr , 10 , 0 , 2 ) ; 

}