#include <iostream>
using namespace std ; 

int binarySerach(int arr[] , int size ,  int key ){
    int start = 0 ; 
    int end =  size ; 

    while (start <= end)
    {
        int mid = (start+end) /2 ;
        if(arr[mid] ==  key ){
            return mid ; 
        }
        else if (arr[mid] > key ){
            end = mid - 1 ; 
         }
         else{
            start = mid + 1 ;

         }
    }
    return -1 ;
    

}




int main(){
    int  n  ;
    int  key  ;
    cout<<"ENTER ARRAY SIZE " ; 
    cin>> n ;

    cout<<"ENTER KEY VALUE " ; 
    cin>> key;

    int arr[n];

    cout<<"ENTER ARRAY ELEMETS  " ; 

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i] ;
    }
     
     int ans  =  binarySerach(arr , n , key ) ;
     cout<<ans << endl ;

return 0 ;

}