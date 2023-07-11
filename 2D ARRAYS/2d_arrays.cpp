#include <iostream>
using namespace std  ; 
int main (){
   int r , c ;
   cout<<"ENTER ROWS AND COLUMNS   : ";
   cin >> r >> c ; 
   int find  ;
   cout<<"ENTER NUMBER TO FIND  : " ;
   cin >>find ;
   int  arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>arr[i][j] ;
        }
        cout<<endl;
        
    }
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<arr[i][j] <<" ";
            if (arr[i][j]== find)
            {
                cout<<"ELEMNT FOUND AT : "<<"{"<<i<<"}"<<"{"<<j<<"}"<<endl ;
            }
            
        }
        cout<<endl;
        
    }
    

}