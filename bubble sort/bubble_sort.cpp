#include<iostream>
using namespace std ;
int main(){
    int n ; 
    int num ; 
    cout<<"ENTER ARRAY SIZE  ; " ;
    cin>> n ; 
    int arr[n] ;
    num = n ;
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i] ;

    }
    
while (num>0)
{


    for (int i = 0; i < n; i++)
    {
        if (arr[i]>arr[i+1])
        {
            int temp =  arr[i] ;
            arr[i] = arr[i+1] ;
            arr[i+1]  = temp ;

        }
    }

    num-- ;
}


 for (int i = 0; i < n; i++)
 {
     cout<<arr[i] <<" " ;
 }
 

}