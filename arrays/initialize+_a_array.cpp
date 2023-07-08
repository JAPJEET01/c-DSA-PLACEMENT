#include <iostream>
#include <climits>
#include<algorithm>
#include<minmax.h>
using namespace std ; 
int main(){
    int n ; 
    int maxno = INT_MIN ; 
    int minno = INT_MAX ; 
    cin>> n ; 
    int arr[n] ; 

    for (int i = 0; i < n ; i++)
    {
        cin>>arr[i] ;
        maxno = max(maxno,arr[i]);
        minno = min(minno,arr[i]);
    }
    
    cout<< "maximun number is " <<maxno  <<endl;
    cout<< "minimum number is " <<minno  <<endl;


    // for (int  i = 0; i < n ; i++)
    // {
    //     cin >>arr[i] ;
        
    //     if (arr[i] > max ){
    //         max = arr[i] ;
    //     }
        
    //     if (arr[i] < min ){
    //         min = arr[i] ;
    //     }

        
    // }
    // cout<<"MAX NUMER IS   :  " <<max <<" , " <<endl << "MININMUM NUMBER IS  : " << min ; 
    
} 