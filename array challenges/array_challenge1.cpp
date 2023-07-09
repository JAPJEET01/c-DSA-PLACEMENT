#include <iostream>
#include <climits>
using namespace std ;
 int main(){
    int n ; 
    cin>>n ;
    int arr[n] ;
    int maximum  = INT_MIN;
   
 

for (int  i = 0; i < n; i++)
{
    cin>>arr[i] ; 
}

for (int  i = 0; i < n; i++)
{
   
    cout<<arr[i] <<" " ; 
}

cout<<endl ;
for (int  i = 0; i < n; i++)
{
    maximum = max(arr[i],maximum) ;
    cout<<maximum  << " ";  
}

  }