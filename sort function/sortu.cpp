#include<bits/stdc++.h>
using  namespace std ; 

void sortingdecend(int arr[] , int n ){
    sort(arr , arr+ n , greater<int>()) ;  
}
void sortingacend(int arr[] , int n ){
    sort(arr , arr+ n ) ;  
}

int main(){

    int arr[7]={1,5,3,5,454,35,6} ;
    int n =  7  ; 
    sortingacend(arr, n) ; 

    for (int i = 0; i < n; i++)
    {
    cout<<arr[i] << " " ; 
        
    }
    cout<<endl ;
    sortingdecend(arr, n) ; 
    for (int i = 0; i < n; i++)
    {
    cout<<arr[i] << " " ; 
        
    }
    

}