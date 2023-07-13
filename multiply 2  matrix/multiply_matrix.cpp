#include<iostream>
using namespace std ; 
int main(){
    int r1 , c1 ;
    int n  ;
    int r2 , c2 ;
    int multi[n][n] ; 

    int arr1[r1][c1]  = {{1,2,3},{4,5,6},{7,8,9}};
    int arr2[r2][c2]  = {{1,2,3},{4,5,6},{7,8,9}};


    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < r1; k++)
            {
                multi[i][j] = arr1[r1][0]*arr2[c2][0] ;
            }
            
        }
        
    }


    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            cout<<multi[i][j];
        }
        
    }
    
    
}