#include<iostream>
using namespace std ; 
int main (){ 
    int  n ;
    cin>>n ;
    int min ;
    int arr[n]  ;
    bool  flag  =  0 ; 
    int arrindex = 0 ;
    int repeted[n] ;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i] ;
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i] ==  arr[j] && i != j ){
                // cout<<"INDEX OF FIRST OCCURING ELEMNT  IS  : "<< i << " and "<< j <<   " AND VALUE OF ELEMNT IS  : "<<arr[i] <<endl ;
                // break;
                // flag = 1 ;
                repeted[arrindex] = arr[i] ;   
                arrindex+=1 ;
            }
            
        }
    }

    for (int i = 0; i < arrindex; i++)
    {
        min = INT_MAX ;
        if (repeted[i] < min)
        {
            min =  repeted[i] ;
        }
        
    }

    if (sizeof(repeted) == 0 )
    {
        cout<<"tere is no repeted elemnt : "<<endl ;
    }
    else{

    cout << "SMALLED REPETED ELEMENT IS  : "<<min <<endl;
    cout<<"SIZE OF REPETED IS  : "<<sizeof(repeted);
    }
    
    cout<<arr[arrindex] ;
 
    
            
        

    


}